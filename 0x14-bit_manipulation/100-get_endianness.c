#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if endian is big, 1 if endian is little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
