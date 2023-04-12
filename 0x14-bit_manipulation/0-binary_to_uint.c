#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned integer
 * @b: binary string
 * Return: integer converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}

/**
 * _strlen - A function to return the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _pow_recursion - A function to return a raised to power of b
 * @a: integer
 * @b: exponent
 * Return: the integer to be returned
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
