#include "list.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    size_t len;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    new->str = strdup(str);

    for (len = 0; str[len]; len++)
        ;

    new->len = len;
    new->next = *head;
    *head = new;

    return (*head);
}