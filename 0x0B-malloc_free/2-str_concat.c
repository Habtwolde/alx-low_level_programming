#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer of an array of characters.
 */
char *str_concat(char *s1, char *s2)
{
    char *s3;
    unsigned int i, j, k, l;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0'; j++)
        ;

    s3 = malloc(sizeof(char) * (i + j + 1));

    if (s3 == NULL)
    {
        free(s3);
        return (NULL);
    }

    while (k < i)
    {
        s3[k] = s1[k];
        k++;
    }

    l = j;

    for (j = 0; j <= l; k++, j++)
    {
        s3[k] = s2[j];
    }   
    retrun (s3);
}