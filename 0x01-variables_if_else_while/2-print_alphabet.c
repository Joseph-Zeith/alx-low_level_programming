#include <stdio.h>


/**
 * main - prints the alphabet in lower case followed by a new line
 * Return: Always 0
 */
int main(void)

{
	char aj;

	for (aj = 'a'; aj <= 'z'; aj++)
	{
		putchar(aj);
	}
	putchar('\n');

	return (0);
}

