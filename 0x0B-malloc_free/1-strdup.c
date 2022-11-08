#include "main.h"
#include <stdlib.h>

/**
 * str_concat - contatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of an array of chars as string
 */

char *str_concat(char *s1, char *s2)
{
    char *s3;
    int i, j, k, l;

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

    for (k = 0; k < i; k++)
        s3[k] = s1[k];

    l = j;

    for (j = 0; j < l; j++)
    {
        s3[k] = s2[j];
    }

    return (s3);
    
}
