#include<stdio.h>
#include "main.h"
/**
* _strstr - Program entry
* @haystack:xxx
* @needle:xxxx
*
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{

	int j;

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (*(haystack + j) != needle[j] || *(haystack + j + 1) == '\0')
			{
				break;
			}
			if (needle[j + 1] == '\0')
			return (needle);
		}
	haystack++;

	}
	return (0);
}
