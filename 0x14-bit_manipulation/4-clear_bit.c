#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n:a pointer to  the integer to operate on
 * @index: the index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
