#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *charc;
	unsigned int i;

	while (size == 0)
		return (NULL);
	charc = malloc(sizeof(c) * size);

	if (charc == NULL)
		return (NULL);
	while (i < size)
	{
		charc[i] = c;
		i++;
	}
	return (charc);
}
