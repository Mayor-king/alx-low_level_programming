#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ma;
	char sir;

	for (ma = 'a'; ma <= 'z'; ma++)
	{
		putchar(ma);
	}
	for (sir = 'A'; sir <= 'Z'; sir++)
	{
		putchar(sir);
	}
	putchar('\n');
		return (0);
}
