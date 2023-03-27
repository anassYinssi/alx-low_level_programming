#include<stdio.h>
#include "main.h"
/**
* swap_int - Program entry
* @a:xxxxx
* @b:xxxxxx
* Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
