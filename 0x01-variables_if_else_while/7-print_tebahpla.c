#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 
 */
int main(void)
{
	char c;
	for (c = 'a'; c =< 'z'; c++)
	{
		putchar(rev (c));
	}
	putchar('\n');
	return (0);
}
