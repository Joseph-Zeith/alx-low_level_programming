#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @*n: a pointer to the bit to clear
 * @index: position  at which the bit is staged
 *
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
