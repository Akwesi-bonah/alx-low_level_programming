#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type dog
 * @d: dog variable to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog owner's name
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
