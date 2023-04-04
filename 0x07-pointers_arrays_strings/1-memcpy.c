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
	int i = 0;

	for (; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
