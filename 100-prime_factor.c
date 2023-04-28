#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143;
	long int div = 2;
	long int largest_prime = 0;

	while (num != 0)
	{
		if (num % div != 0)
			div++;
		else
		{
			largest_prime = num;
			num = num / div;
			if (num == 1)
			{
				printf("%ld\n", largest_prime);
				break;
			}
		}
	}
	return (0);
}
