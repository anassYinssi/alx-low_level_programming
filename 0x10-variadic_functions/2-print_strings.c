#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Program entry
* @separator:xxxx
* @n:xxxxxx
* Return: Always 0 (Success)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n ; i++)
	{
		if (va_arg(args, char*) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(args, char*));
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(args);
}
