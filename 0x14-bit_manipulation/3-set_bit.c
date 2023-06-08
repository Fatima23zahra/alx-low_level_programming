#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: a pointer to  the integer to operate on
 * @index: the index of the bit to turn on
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
