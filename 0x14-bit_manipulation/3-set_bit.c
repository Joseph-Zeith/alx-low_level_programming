#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @*n: a pointer at the bit 1
 * @index: a position of the bit 1
 *
 * Return: 1(success) and -1(failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
