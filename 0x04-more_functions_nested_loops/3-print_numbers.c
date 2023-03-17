#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers -  prints the numbers, from 0 to 9
 * Description: prints the numbers in order from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

