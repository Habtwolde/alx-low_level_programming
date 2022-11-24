#include "list.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *last;
    size_t len;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);

    for (len = 0; str[len]; len++)
        ;
    
    new->len = len;
    new->next = NULL;
    last = *head;

    if (last == NULL)
    {
        *head = new;
    }
    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }

    return (*head);
}