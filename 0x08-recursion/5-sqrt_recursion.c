#include "main.h"
/**
 * _sqrt_recursion - print square root of n
 * @n: int param
 * return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
/**
 * _sqrt_recursion - print square root of n
 * @n: int param
 * @i: int param
 * return: int
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (n);
	}
	return (_sqrt(n, i + 1));
