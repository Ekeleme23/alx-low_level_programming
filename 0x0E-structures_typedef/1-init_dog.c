#include "dog.h"

/**
* init_dog - Initialize a dog structure with provided information
* @d: A pointer to the struct dog to be initialized
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner's name of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

