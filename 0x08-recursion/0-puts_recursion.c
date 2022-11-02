#include "main.h"

/**
  * _puts_recursion - prints string recursively
  * @s: string pointer which holds the address
  * Return: returns null
  */

void _puts_recursion(char *s)
{
	if (*s != NULL)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
