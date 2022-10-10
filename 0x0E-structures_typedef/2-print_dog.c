#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * Return: No.
 */

void init_dog(struct dog *d)
{
    if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}