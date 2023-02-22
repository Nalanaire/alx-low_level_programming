#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the char to be checked
 * Returm: 1 if char letter is upper or lower, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
		else
			return (0);
}
