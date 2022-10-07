#include <stdio.h>
/**
 *  main - alphabet in lowercase
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}

