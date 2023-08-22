#include "main.h"
/**
 * _isdigit - checks if a character is uppercase
 *
 * @c: the character to check
 *
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
