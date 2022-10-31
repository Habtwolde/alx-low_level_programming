#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *shaystack;
	char *sneedle;

	while (*haystack != '\0')
	{
		*shaystack = *haystack;
		*sneedle = *needle;

		while (*sneedle != '\0' && *haystack == *sneedle)
		{
			haystack++;
			sneedle++;
		}
		if (!*sneedle)
			return (*shaystack);
		*haystack = *shaystack + 1;
	}
	return (0);
}
