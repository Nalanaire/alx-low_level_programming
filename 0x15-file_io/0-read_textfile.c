#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strlen - to returns string length
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * read_textfile - to read a text file and print the letters
 * @filename: name of the file.
 * @letters: the numbers of letters to print
 * Return: the numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters2;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (read(fd, buffer, letters) == -1)
	{
		free(buffer);
		return (0);
	}
	letters2 = _strlen(buffer);
	letters2 = write(STDOUT_FILENO, buffer, letters2);
	if (letters2 == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (close(fd) == -1 ? -1 : letters2);
}
