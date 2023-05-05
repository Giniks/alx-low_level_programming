#include "main.h"

/**
 * string_toupper - converts all lowercase letter of a string
 * to uppercase
 * @str: the string to convert
 * Return: pointer to the converted string
 */
char *string_toupper(char *str)
{
	char *ptr = str;


	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
