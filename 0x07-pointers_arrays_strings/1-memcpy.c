#include<stdio.h>
#include "main.h"
/**
* _memcpy - Program entry
* @dest:xxx
* @src:xxx
* @n:xxxx
*
* Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

