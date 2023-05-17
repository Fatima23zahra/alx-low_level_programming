#include <stdlib.h>

/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer to the string to copy
 *
 * Return: NULL if str is NULL or if memory allocation fails,
 * otherwise a return a pointer to the new copy
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		duplicate = malloc(sizeof(char) * size);
		if (duplicate)
		{
			while (size--)
				duplicate[size] = str[size];

			return (duplicate);
		}
	}
	return (duplicate);
}
