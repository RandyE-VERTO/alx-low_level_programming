#ifndef DOG_H
#define DOG_H

/**
 * struct dog- creates information about dogs
 *
 * @name: Dog name
 * @age: Dog's age
 * @owner: name of the owner of the dog
 *
 * Description: creating structs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
