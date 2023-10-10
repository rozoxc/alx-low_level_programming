#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: A pointer to a struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

