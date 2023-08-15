#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - This function prints a struct dog
 *@d: The struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->erick == NULL)
		d->erick = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->erick, d->age, d->owner);
}

