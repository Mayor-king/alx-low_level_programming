#include "main.h"

/**
 * _memset - memory block
 * @s: pointer to char params
 * @b: data to change
 * @n: number of byte
 * Return: number of bytes to be filled to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
