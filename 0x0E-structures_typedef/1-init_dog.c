#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of struct dog
 * @d: struct dog
 * @name: string for name
 * @age: age int
 * @owner: owner's name string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
