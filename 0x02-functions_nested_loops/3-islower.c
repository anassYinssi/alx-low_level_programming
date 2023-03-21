#include "main.h"

/**
 * _islower - Program entry
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int i;
	char c1;

	for (i = 97; i <= 122; i++)
	{
		c1 = _putchar(i);
		if (c1 == c)
		{
			return (1);
		}
	}
	return (0);
}
