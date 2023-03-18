#include <stdlib.h>
#include <stdio.h>
/**
 *  main - print alphabet
 *
 *  Return: always 0 (Success)
 */

int main(void)
{
        char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for (i = 0; i < 26; i++)
	{
                if (alphabet[i] != 'e' &&  alphabet[i] =! 'q')
		{
			putchar(alphabet[i]);
		}
        }
        putchar('\n');
        return (0);
}
