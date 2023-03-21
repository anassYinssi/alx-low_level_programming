#include "main.h";
/**
* Main - Program entry
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char chaine = "_putchar";

	for (i = 0; i < 8 ; i++)
	{
		_putchar(chaine[i]);
	}
	_putchar('\n');

	return (0);
}

