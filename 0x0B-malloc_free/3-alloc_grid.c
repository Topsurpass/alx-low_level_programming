#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2-dimensional array of integers
 * @width: the width
 * @height: the height
 *
 * Return: pointer to the 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;

	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);/*first allocate memory for height*/

	if (arr == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);/*now allocate memory for width*/
		if (arr[i] == NULL)/*if memory cannot be allocated, free both*/
		{
			for (k = 0; k < height; k++)
				free(arr[k]);/*free the one that cannot be allocated*/
			free(arr);/*free the memory for that iteration too*/
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

