#include "main.h"

/**
 * islower - checks if the character is lowercase
 * @c: the character
 * Return: 1 if the character is lower, 0 if not
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

