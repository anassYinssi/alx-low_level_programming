#include<stdio.h>
#include "main.h"
/**
* main - Program entry
*
* Return: Always 0 (Success)
*/

int factorial(int n)
{
	if ( n == 0)
	{
		return (1)
	}
	return (factorial( n * factorial(n -1)));
}
