#include "main.h"

/**
 * get_bit - check if a bit at an index in a decima num
 * @n: num to operate
 * @index: the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (1 & (n >> index));
}
