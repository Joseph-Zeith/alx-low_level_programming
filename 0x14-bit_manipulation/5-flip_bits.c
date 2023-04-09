#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, x = 0;
	unsigned int g;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		g = exclusive >> a;
		if (g & 1)
			x++;
	}
	return (x);
}
