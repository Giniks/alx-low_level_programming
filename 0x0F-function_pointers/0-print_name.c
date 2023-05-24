#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using pointer to functions
 * @name: string to input
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
