#include "main.h"

/**
 * get_endianness - checks the endianness
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) & j;
	return (*a);
}
