#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			if (accept[r] == '\0')
				break;
		}
		s++;

	}
	return (n);
}
