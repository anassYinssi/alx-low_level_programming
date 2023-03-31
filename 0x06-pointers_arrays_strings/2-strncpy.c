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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i]='\0';
		i++;
	}

	return (dest);

}
