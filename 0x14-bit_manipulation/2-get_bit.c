#include "main.h"

/**
 * get_bit - check if a bit is on
 * @n: the number to print
 * @index: the index of the desired bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (1 & (n >> index));
}
