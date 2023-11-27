#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- dog struct to be initialized
 *
 * @d: pointer to the new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: name of the dog's owner
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
