#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: char pointer
 * @s2: char pointer
 * Return: points to newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	int ch1, ch2, a, b;
	char *strNew;

	ch1 = 0;
	ch2 = 0;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 =='\0')
	{
		s2 = "";
	}
	while (s1[ch1] != '\0')
	{
		ch1++;
	}
	while (s1[ch2] != '\0')
	{
		ch2++;
	}
	strNew = malloc(sizeof(char) *(ch1 + ch2));
	if (ch1 == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ch1; a++)
	{
		strNew[a] = str[a];
	}
	for (b = 0; b < ch2; b++)
	{
		strNew[a + b] = str[b];
	}
	retururn (strNew);
}
