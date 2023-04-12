#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * end_func - a function for all standard errors
 * @file1: exit status or file descriptor
 * @file2: file name to or from
 * Return: 97, 98, 99, or 100 depending on input file1
 */
int end_func(int file1, char *file2)
{
	int value;

	switch (file1)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		value = 97;
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file2);
		value = 98;
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		value = 99;
		break;
	default:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file1);
		value = 100;
		break;
	}
	return (value);
}
/**
 * main - copies from one file to another file
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 on succes
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_count, write_count, close_status;
	char buf[1024];
	char *file_from, *file_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from), exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	read_count = 1;
	while (read_count != 0)
	{
		read_count = read(fd_from, buf, 1024);

		if (read_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from), exit(98);
		buf[1024] = '\0';

		if (read_count != 0)
		{
			write_count = write(fd_to, buf, read_count);
			if (write_count == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
		}
	}
	close_status = close(fd_from);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	close_status = close(fd_to);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
