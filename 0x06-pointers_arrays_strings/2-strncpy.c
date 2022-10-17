#include "main.h"

/**
 * _strncpy - copying string to a destination
 * @dest: string copying into
 * @src: string to be copied
 * @n: number of byte(s) of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (i < n)
	{
		*(dest + i) = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
