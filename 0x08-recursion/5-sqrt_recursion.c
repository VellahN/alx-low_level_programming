#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to calculate the square root of
 * Return: results of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * @n: number to calculate the square root of
 * @i: iteration
 * Return: the resulting of square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-i);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
