#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes the struct d.
 * @d: the struct.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 * Return: the tags filled.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
