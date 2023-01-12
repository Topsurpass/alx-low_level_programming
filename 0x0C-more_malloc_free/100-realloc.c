#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: old nenory block
 * @old_size: the size, in bytes, of the old
 * allocated space for ptr
 * @new_size: the size, in bytes, of the new
 * memory block
 *
 * Return: new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr_new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr_new = malloc(new_size);
		if (arr_new == NULL)
			return (NULL);
		else
			return (arr_new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr_new = malloc(new_size);
	if (arr_new == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *) arr_new + i) = *((char *) ptr + i);
	return (arr_new);
}
