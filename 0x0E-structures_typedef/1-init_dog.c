#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 * struct dog - dog's properties
 * @d: the dog to init
 * @name: dog name
 * @age: dog age
 * @owner: the owner name
 *
 * return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
