#include "main.h"
/**
 * string_toupper - change lowercase to highercase
 * @s: string
 * Return: nothing
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) <= 122 && s[i] >= 97)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
