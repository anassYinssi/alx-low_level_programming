#include<stdio.h>
#include "main.h"
/**
* _strlen_recursion - Program entry
* @s:xxxxxx
*
* Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		len++;
	}

	return (len);


}
