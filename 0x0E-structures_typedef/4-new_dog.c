#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: the first parameter
 * @age: the second parameter
 * @owner: the third parameter
 *
 * Return: pointer to dog_t struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_type;

	new_dog_type = malloc(sizeof(dog_t));

	if (new_dog_type == NULL)
		return (NULL);

	new_dog_type->name = name;
	new_dog_type->age = age;
	new_dog_type->owner = owner;

	return (new_dog_type);
}
