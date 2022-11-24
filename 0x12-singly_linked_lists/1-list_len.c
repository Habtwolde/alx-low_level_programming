#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
    size_t i = 0;

    while (h != NULL)
    {
        h = h->next;
        i++;
    }
    return (i);
}