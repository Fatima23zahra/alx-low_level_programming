#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints of the dogs
 * @d: attributes of the dog
 *
 * return: always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\n");
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: (nil)\n");
		printf("Owner: %s\n", (*d).owner);
	}
}
