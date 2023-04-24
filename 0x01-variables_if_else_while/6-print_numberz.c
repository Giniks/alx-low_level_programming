#include <stdio.h>
/**
 * main - printing single digit from 0 to base 10
 * Return: Always 0
 */
int main(void)
{
	int i;
	{
		for (i = 0; i < 10; i++)
			putchar(i + '0');
	}
	putchar("\n");
	return (0);
}
