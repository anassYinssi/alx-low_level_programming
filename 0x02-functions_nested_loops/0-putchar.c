#include<unistd.h>
/**
* Main - Program entry
*
* Return: Always 0 (Success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int i;
	char chaine = "_putchar";
	for(i = 0; i < 8 ; i++)
	{
		_putchar(chaine[i]);
	}

	return (0);
}

