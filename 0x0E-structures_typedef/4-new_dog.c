#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nd, ow, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nd = 0; name[nd]; nd++)
		;
	nd++;
	dog->name = malloc(nd * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nd; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ow = 0; owner[ow]; ow++)
		;
	ow++;
	dog->owner = malloc(ow * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
