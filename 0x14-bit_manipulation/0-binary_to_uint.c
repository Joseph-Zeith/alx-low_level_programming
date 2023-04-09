#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary string to convert
 *
 * Return: the unsigned int decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int g = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; b++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		g = 2 * g + (b[j] - '0');
	}
	return (g);
}
