#include<stdio.h>
#include "main.h"
/**
* _strncat - Program entry
* @dest:xxxxx
* @src: xxxx
* @n:x xxx
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
