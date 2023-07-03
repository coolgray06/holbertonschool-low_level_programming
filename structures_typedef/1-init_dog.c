#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Dog structure
 * @name: Name for dog
 * @age: Age for dog
 * @owner: Owner of dog
 * Return: Void
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
