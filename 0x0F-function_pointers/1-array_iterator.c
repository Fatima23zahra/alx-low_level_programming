#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints the arrays through a function pointer
 * @array: the int array
 * @action: the function pointer
 * @size: uses size_t to calculate the size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if ((array != NULL) && (action != NULL))
	{
		for (index = 0; index < size; index++)
		{
			(*action)(array[index]);
		}
	}
}
