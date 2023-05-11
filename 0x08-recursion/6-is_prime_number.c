#include "main.h"

/**
 * sqrt_helper - recursive helper function to calculate square root
 *
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 * Return: return the natural square root of n, -1 if it has no natura
 * square root.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - calculate the natural square root of a number
 *
 * @n: the numner to find square root of
 *
 * Return: the natural square root of n, -1 if it has no natural square
 * root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
