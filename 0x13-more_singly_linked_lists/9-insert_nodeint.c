#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node with the given value of index
 * @head: a pointer to a pointer of the first node in the list
 * @idx: the given index supposed to be inserted
 * n: the data to be inserted
 *
 * Return: the address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current = *head;
    unsigned int i;
    new_node = malloc(sizeof(listint_t));

    if (!new_node || !head)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }
    for (i = 0; current && i < idx; i++)
    {
        if (i == idx - 1)
        {
            new_node->n = n;
            new_node->next = current->next;
            current->next = new_node;
            return (new_node);
        }
        else
            current = current->next;
    }
    return (NULL);
}
