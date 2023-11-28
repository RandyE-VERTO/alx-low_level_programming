#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- creates info for a new dog
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * Return: pointer to the new dog's info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)

	a++;
	dog->name = malloc(sizeof(char) * a);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (b = 0; b < a; b++)
		dog->name[b] = name[b];
	dog->age = age;
	for (c = 0; owner[c]; c++)
		;
	c++;
	dog->owner = malloc(c * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (b = 0; b < c; b++)
		dog->owner[b] = owner[b];
	return (dog);
}
