#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: string comparing another
 * @s2: string that will be compared
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (i == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		i++;

	}
	return (s1[i] - s2[i]);
}
