#include "main.h"

/**
 * print_array - prints array of integers
 * @n: number of element of the array to be printed
 * @a: elements of array
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf('\n');
}

