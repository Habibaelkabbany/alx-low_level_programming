#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - initialize a variable of type struct dog
 * @d: a pointer to the dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
