#include "main.h"
#include <stdio.h>
/**
 * set_bit - value of bit to 1 at given index
 * @n: pointer
 * @index: index value to be converted
 * Return: 1 on success, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changenum = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	changenum <<= index;
	*n = *n | changenum;
	return (1);
}
