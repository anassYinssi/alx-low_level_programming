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

	for (i = strlen(s); i > 0 ; i--)
	{
		putchar(*(s+i));
	}
	printf("\n");
}
