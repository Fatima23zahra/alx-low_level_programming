#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog struct
 * @name: imports name
 * @age: imports age
 * @owner: imports the name of the owner
 * description: just a lone dog struct in a big kitty world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
