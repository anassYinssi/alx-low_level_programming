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
	int len = strlen(s);

	for (i = len - 1; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	printf("\n");
}
