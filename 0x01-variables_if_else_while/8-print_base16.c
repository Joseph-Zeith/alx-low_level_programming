#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j;

	for (j = 0; j < 16; j++)
	{
		if (j < 10)
		{
			putchar('0' + j);
		}
		else
		{
			putchar('a' + j - 10);
		}
	}
	putchar('\n');

	return (0);
}
