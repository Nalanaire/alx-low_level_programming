#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 16) {
			putchar(d + '0');
			d++;
		}
	while
		(c < 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
