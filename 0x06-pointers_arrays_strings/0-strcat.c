#include "main.h"

/**
 * _strcat - concantenate two string
 * @dest: string to be appended
 * @src: string that concantenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int con = 0, cat = 0;

	while (*(dest + con) != '\0')
	{
		con++;
	}
	while (cat >= 0)
	{
		*(dest + con) = *(src + cat);
		if (*(src + cat) == '\0')
			break;
		con++;
		cat++;
	}
	return (dest);
}
