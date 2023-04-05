#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* _puts_recursion - Program entry
* @s:xxxxx
*
* Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
