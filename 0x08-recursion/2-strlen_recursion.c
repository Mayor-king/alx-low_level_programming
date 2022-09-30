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
		return(1 + _strlen_recursion(++s));
	}
		return (0);
}
