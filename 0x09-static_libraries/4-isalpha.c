#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if c is not lowercase, 0 otherwise
 */

int _isalpha(int c)
{
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
