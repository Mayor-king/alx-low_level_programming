#include  "main.h"

/**
 * _strlen_recursion - print a string
 * @s: char arg
 * Return: Always 0 (Sucess)
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
	}
	return (0);
}
