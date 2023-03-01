#include "main.h"

/**
 * _strncat - concantenate two strings
 * @dest: copy to
 * @src: copy from
 * @n: number of byte from src to be apended to dest
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
