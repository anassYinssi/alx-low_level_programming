#include "main.h"

/**
 * _islower - Program entry
 * @c: character to be checked
 * Return: 1 for lowercase  and 0 for anything else
 */
int _islower(int c)
{
	int i;
	int c1;

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
