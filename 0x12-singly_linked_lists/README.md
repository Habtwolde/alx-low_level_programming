0x12. C - Singly linked lists

#Arrays and Linked Lists

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

##files
|0-print_list.c|function that prints all the elements of a list_t list.|