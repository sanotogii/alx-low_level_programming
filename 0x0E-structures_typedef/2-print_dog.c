#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog data
 * @d: arg
 * Return: void
 */

void print_dog(struct dog *d)
{
		if (d)
			return;
		if (d->name)
			printf("Name: %s\n", (*d).name);
		else
			printf("(nil)\n");
		if (d->age < 0)
			printf("(nil)\n");
		else
			printf("Age: %f\n", (*d).age);
		if (d->owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("(nil)\n");

}
