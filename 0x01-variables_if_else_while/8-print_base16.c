#include <stdio.h>
/**
 * main - print all numbers in base 16 lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;
	{
		for (num = '0'; num <= '16'; num++)
			putchar((num % 16) + '0');
		for (la = 'a'; la <= 'f'; la++)
			putchar(la);
	}
	putchar('\n');
	return (0);
}
