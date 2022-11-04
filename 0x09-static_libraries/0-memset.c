#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area to be filled by first n constant bytes.
 * @b: Buffer -- constant byte.
 * @n: bytes to be filled/ size to be filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
