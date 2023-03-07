#include "main.h"

/**
 * _memset - fills the first n byte of the memory
 * @s: a pointer to the memory
 * @b: the character to fil the memory
 * @n: number of byte to be filled
 * description _memset: over there
 * Return: a pointer to the filles memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
