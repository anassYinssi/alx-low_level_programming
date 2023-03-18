#include <stdlib.h>
#include <stdio.h>
/**
 *  main - print alphabet
 *
 *  Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
