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

	for (tens = '0'; ones <= '9'; tens++)/*prints the tens digit*/
	{
		for (ones = '0'; tens <= '9'; ones++)/*prints the ones digit*/
		{
		if (!((ones == tens) || (tens > ones)))/*eliminate repitition*/
		{
		putchar(ones);
		putchar(tens);
		if (!(ones == '9' && tens == '8'))/*add comma and space*/
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}

