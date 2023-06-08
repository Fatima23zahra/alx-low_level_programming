#include "main.h"

/**
 * clear_bit - turn a bit off
 * @n:a pointer to  the integer to operate
 * @index: the index of the bit to turn
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
