#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the pointer
 * d to free up memory
 * @d: yo dawg
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
