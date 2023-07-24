#include <stdio.h>

/**
 * add - to add 2 numbers
 * @: first number
 * @b: second number
 * Return: sum of 2 numbers
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * sub - to subtract 2 numbers
 * @a: First number
 * @b: Second number
 * Return: difference of 2 numbers
 */
int sub(int a, int b)
{
        int result;
	
	result = a - b;

        return (result);
}

/**
 * mul - to multiply 2 numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of 2 numbers
 */
int mul(int a, int b)
{
        int result;

        result = a * b;

        return (result);
}

/**
 * div - to divide 2 numbers
 * @a: First number
 * @b: Second number
 * Return: division of 2 numbers
 */
int div(int a, int b)
{
        int result;
	
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
        result = a / b;

	return (result);
}

/**
 * mod - to calculate the remainder of the division of two numbers
 * @a: first number (dividened)
 * @b: second number (divisor)
 * Return: Remainder 
 */
int mod(int a, int b)
{
        int result;
	
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
	result = a / b;

        return (result);
}
