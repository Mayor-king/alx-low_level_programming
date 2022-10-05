#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: char param
 * Return: pointer of string
 */
char *_strdup(char *str)
{
	char *strDup;
	unsigned int a, b;

	a = 0;
	b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (a != '\0')
	{
		a++;
	}
	strDup = malloc(sizeof(char) * (a + 1));

	if (strDup == NULL)
	{
		return (NULL);
	}
	while (b < a)
	{
		strDup[b] = str[b];
		b++;
	}
	strDup[b] = '\0';

	return (strDup);
}
