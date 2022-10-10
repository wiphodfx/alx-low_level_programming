#include "dog_h"
#include <stdio.h>

/**
 * print_dog - print the dog struct
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
