#include "main.h"

/**
 * _memcpy - function to copy memory areas
 * @dest: memory where to store
 * @src: memory where is copied
 * @n: number of byte to be filled
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

