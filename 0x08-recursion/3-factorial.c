#include "main.h"

/**
  * factorial - a function that returns the factorial of number.
  * @n: integer number.
  * Return: the factorial of integer number
  */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
