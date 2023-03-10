#include "main.h"

/**
 * _strchar - entry point
 * @s: input value
 * @c: input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
        int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
