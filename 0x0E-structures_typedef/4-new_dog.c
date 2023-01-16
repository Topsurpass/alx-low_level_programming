#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - the length of string
 * @s: the string
 *
 * Return: the length of thes tring
 */
int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(s + i));

}
/**
 * _strcpy - Copy string from source string to another
 * @dest: the destination string
 * @src: the source string
 *
 * Return: modified string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

	char *copy_name, *copy_owner;

	new_dog_type = malloc(sizeof(dog_t));

	if (new_dog_type == NULL)
		return (NULL);

	new_dog_type->age = age;


	if (name != NULL)
	{
		copy_name = malloc(sizeof(*copy_name) * (_strlen(name) + 1));
		if (copy_name == NULL)
		{
			free(new_dog_type);
			return (NULL);
		}
		new_dog_type->name = _strcpy(copy_name, name);
	}
	else
		new_dog_type->name = NULL;

	if (owner != NULL)
	{
		copy_owner = malloc(sizeof(*copy_owner) * (_strlen(owner) + 1));
		if (copy_owner == NULL)
		{
			free(copy_name);
			free(new_dog_type);
			return (NULL);
		}
		new_dog_type->owner = _strcpy(copy_owner, owner);
	}
	else
		new_dog_type->owner = NULL;

	return (new_dog_type);
}
