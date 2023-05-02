#include "main.h"

/**
 * swap_int - swaps the value of two integers named a and b
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
