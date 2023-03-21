#include "main.h"
/**
* print_sign - Program entry
* @n: number to test
* Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
