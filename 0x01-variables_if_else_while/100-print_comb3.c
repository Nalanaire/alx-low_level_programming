#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int ones = '0';

	int tens = '0';

	for (tens = '0'; ones < '9'; tens++)/*prints the tens digit*/
	{
		for (ones = '0'; tens <= '9'; ones++)/*prints the ones digit*/
		{
		for (tens = ones + 1; tens <= '9'; tens++)/*eliminate repitition*/
		{
			if (tens != ones)
			{
		putchar(ones);
		putchar(tens);
		if (ones == '8' && tens == '9')/*add comma and space*/
			continue;
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}

