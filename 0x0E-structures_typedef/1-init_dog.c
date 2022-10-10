#include "dog.h"

/**
 * init_dog: intializes variable
 * @d: struct pointer
 * @name: param for name
 * @age: param for age
 * @owner: param for owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
