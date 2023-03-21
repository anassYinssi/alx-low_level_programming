#include "main.h"

/**
* print_alphabet_x10 - Program entry
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i =0;
	char c;

	do
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
	while (i < 10);
}
