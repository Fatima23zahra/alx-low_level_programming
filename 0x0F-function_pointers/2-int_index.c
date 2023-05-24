#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for a number in
 * the array
 * @array: contains all the elements
 * @size: number of elements
 * @cmp: runs all comparison functions
 * Return: Returns index where that number
 * was found | -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	
	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
