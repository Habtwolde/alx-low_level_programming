#include <stdio.h>
/**
 * main - prints the name of the file in macro's definition
 * Return: 0;
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
