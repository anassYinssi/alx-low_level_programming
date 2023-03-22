#include "main.h"
/**
* times_table - Program entry
*
* Return: Always 0 (Success)
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j + '0');
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
