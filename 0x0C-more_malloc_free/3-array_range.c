#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if min > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ay;
	int i;

	if (min > max)
		return (NULL);
	ay = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ay == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
		ay[i] = min;
	return (ay);
}
