#include "main.h"

/**
 * set_bit - turn a bit on
 * @n: the integer to operate on
 * @index: the index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
