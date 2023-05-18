#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
