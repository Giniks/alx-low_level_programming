#include "main.h"
/**
 * _islower - check if a character is a lower case
 * @c: the character
 * Return: 1 if the letter is lower case, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	       return (1);
	else
		return (0);
}
