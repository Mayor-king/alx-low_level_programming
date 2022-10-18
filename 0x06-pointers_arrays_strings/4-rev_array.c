#include "main.h"
/**
 * reverse_array - reverse thearray of int
 * @a: array
 * @n: number of array elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, rev;

	for (1 = 0; i < n -1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
