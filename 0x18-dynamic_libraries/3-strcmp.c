#include "main.h"

/**
 * _strcmp - compares two string values
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if string are equal, negstive if s1 is less than s2
 * positive if s1 9s greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
