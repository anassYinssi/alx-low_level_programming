#include<stdio.h>
#include "main.h"
/**
* _strncpy - Program entry
* @dest:xxxxxxxxxx
* @src:xxxxxxxx
* @n:xxxxxxxxxxx
* Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}

	return (dest);

}
