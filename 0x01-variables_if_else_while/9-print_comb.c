#include <stdlib.h>
#include <stdio.h>
/**
 *  main - print alphabet
 *
 *  Return: always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}