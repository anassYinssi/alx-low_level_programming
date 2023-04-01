#include<stdio.h>
#include "main.h"
/**
* string_toupper - Program entry
* @s:xxxx
* Return: Always 0 (Success)
*/

char *string_toupper(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 97; j <= 122; j++)
		{
			if (s[i] == _putchar(j))
			{
				s[i] = _putchar(j - 32);
			}
		}
		i++;
	}
	return (s);

}
