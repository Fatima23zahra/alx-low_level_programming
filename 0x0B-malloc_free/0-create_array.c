#include "holberton.h"

/**
 * create_array - create an array of chars, and initializes
 * it with a specific char.
 * @size: the desired size of the array
 * @c: the value with which the array should be initialized
 *
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
