#include<stdio.h>
#include "main.h"
/**
* _strcat - Program entry
* @dest: xxxx
* @src: xxx
* Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);


}
