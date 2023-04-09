#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the decimal whose bit is to be returned
 * @index: the place at which the bit is to be returned
 *
 * Return: the value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int g;

	if (index > 63)
		return (-1);
	g = (n >> index) & 1;
	return (g);
}
