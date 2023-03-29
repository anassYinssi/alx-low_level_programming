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
	int j;
	char c;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < len / 2, j > len / 2; i++, j--)
	{
		c = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = c;
	}
	printf("\n");
}
