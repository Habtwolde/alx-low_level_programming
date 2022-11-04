#include "main.h"
/**
 * _strchr - locates a chacter in a string,
 * @s: string to locate
 * @c: character to find
 * Return: the pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}

