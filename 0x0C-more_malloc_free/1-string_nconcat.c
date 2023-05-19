#ibclude "main"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of byte
 *
 * Return: pointer to allocated memory
 * if malloc fails, status value = 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int Is1, Is2, Isout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (Is1 = 0; s1[Is1] != '\0'; Is1++)
		;
	for (Is2 = 0; s2[Is2] != '\0'; Is2++)
		;
	if (n > Is2)
		n = Is2;
	Isout = Is1 + n;
	sout = malloc(Isout + 1);

	if (sout == NULL)
		return (NULL);
	for (i = 0; i < Isout; i++)
		if (i < Is1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - Is1];
	sout[i] = '\0';
	return (sout);
}
