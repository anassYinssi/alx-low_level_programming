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
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);

}
