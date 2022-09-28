#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 * @s - string to point
 * Return: void
 */

void _puts_recursion(char *s)
{
	if *s == ("\0")
	{
		_putchar(*s);
		return (0);
	}
	_putchar(\n);
	_puts_recursion (s + 1);
}
