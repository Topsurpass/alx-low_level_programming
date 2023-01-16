#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: the struct to initialize
 * @name: the struct 1st paramenter
 * @age: the struct 2nd parameter
 * @owner: the struct 3rd parameter
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
