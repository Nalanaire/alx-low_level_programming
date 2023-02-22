#include "main.h"

/**
 * _islower - checks for lowercase character islower
 * @c: is the char to be checked
 * Retun: 1 if char is lowercase, otherwise  0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
