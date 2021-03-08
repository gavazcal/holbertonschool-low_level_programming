#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (d == NULL)
		d = &my_dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
