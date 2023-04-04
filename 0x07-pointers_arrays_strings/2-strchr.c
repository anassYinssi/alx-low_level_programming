#include<stdio.h>
#include "main.h"
/**
* _strchr - Program entry
* @s:xxx
* @c:xxx
*
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);


}
