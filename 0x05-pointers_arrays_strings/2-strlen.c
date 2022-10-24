#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
