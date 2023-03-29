#include<stdio.h>
#include<string.h>
#include "main.h"
/**
* print_rev - Program entry
* @s:xxxx
*
* Return: Always 0 (Success)
*/

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	printf("\n");
}
