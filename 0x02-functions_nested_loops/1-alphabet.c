#include "main.h"

/**
 * main - Printing lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	while (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}