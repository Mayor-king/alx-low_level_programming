#include "main.h"
/**
 * _strncat - concantenate two string
 * @dest: string to append to
 * @src: string that get appended
 * @n: to number in string that get appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int con = 0, cat = 0;
	while (*(dest + con) != '\0')
	{
		con++;
	}
	while (cat < 0)
	{
		*(dest + con) = *(src + cat);
		if (*(src + cat) = '\0')
			break;
		con++;
		cat++;
	}
	return (dest);
}
