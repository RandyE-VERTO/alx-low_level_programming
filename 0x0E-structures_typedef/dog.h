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

/* dog_t- new name for struct dog */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
