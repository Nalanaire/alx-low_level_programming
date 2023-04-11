#include "main.h"
#include <stdio.h>
/**
 * flip_bits - finds number of bits that need to be flipped
 * @n: number to be flipped
 * @m: number to be flipped
 * Return: the number of bits to flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_num = n ^ m;
	int index = (sizeof(unsigned long int) * 8) - 1;
	int bits_flipped = 0;

	while (index >= 0)
	{
		if ((new_num >> index) & 1)
			bits_flipped++;
		index--;
	}
	return (bits_flipped);
}
