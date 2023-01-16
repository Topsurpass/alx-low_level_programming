#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct
 * @d: the struct to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
