#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: success
 */
int main(void)
{
	int c;
	int h;

	for (c = '0'; c <= '9'; c++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (c < h)
			{
				putchar(c);
				putchar(h);

				if ((c != '9') || (c == '8' && h != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\0');

	return (0);
}

