#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(n = ',');
			putchar(n = ' ');
		}
		putchar('\n');
	}
	return (0);
}