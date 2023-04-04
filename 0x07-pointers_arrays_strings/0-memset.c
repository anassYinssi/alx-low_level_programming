#include<stdio.h>
#include "main.h"
/**
* _memset - Program entry
* @s:xxxx
* @b:xxx
* @n:xxxx
*
* Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);

}
