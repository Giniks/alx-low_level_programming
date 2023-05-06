#include "main.h"

/**
 * cap_string - capitalises all word of a string
 * @str: string to be captilized
 *
 * Return: a pointer to the capitalised string
 */
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
					str[i - 1] == '\n' || str[i - 1] == ',' ||
					str[i - 1] == ';' || str[i - 1] == '.' ||
					str[i - 1] == '!' || str[i - 1] == '?' ||
					str[i - 1] == '"' || str[i - 1] == '(' ||
					str[i - 1] == ')' || str[i - 1] == '{' ||
					str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	}
	return (str);
}

