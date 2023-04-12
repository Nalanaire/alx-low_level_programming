#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _strlen - a function to returns string length
 * @s: string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * append_text_to_file - a function to appends text to the end of a file
 * @filename: name of file
 * @text_content: the text to appended
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);
	len = _strlen(text_content);
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	return (close(fd) == -1 ? -1 : 1);
}
