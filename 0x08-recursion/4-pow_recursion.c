#include<stdio.h>
#include "main.h"
/**
* _pow_recursion - Program entry
* @x:xxxxx
* @y:xxxx
*
* Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
