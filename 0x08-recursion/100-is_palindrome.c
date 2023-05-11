#include "main.h"

/**
 * _sqrt - Calculates the square root of a number using recursion
 *
 * @n: The number to find the square root of
 * @i: The current integer to check
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(n, 1));
}
