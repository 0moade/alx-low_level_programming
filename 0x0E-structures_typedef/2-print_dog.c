#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 * @d: struct name
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: ");

	if (!d->name)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");

	printf("%f\n", d->age);

	printf("Owner: ");

	if (!d->owner)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
