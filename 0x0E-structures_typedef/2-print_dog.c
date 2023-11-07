#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  prints a dog
 * @d: the dog to print
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		prinft("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %s\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}