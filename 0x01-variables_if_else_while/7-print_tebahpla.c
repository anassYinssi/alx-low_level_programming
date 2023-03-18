#include <stdlib.h>
#include <stdio.h>
/**
 *  main - print alphabet
 *
 *  Return: always 0 (Success)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
