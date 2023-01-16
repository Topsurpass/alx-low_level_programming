#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The details of dogs
 * @name: the dog name
 * @age: the dog's age
 * @owner: the dog owner
 *
 * Description: This tells the owner of the dog with
 * the following dog details such as its name and age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
