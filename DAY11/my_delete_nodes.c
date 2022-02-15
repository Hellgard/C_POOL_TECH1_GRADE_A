/*
** EPITECH PROJECT, 2021
** my_delete_nodes.c
** File description:
** delete nodes
*/
#include "my.h"
#include "mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)(void *, void const *))
{
    linked_list_t *temp = *begin;

    while (temp) {
        if ((*cmp)(temp->next->data, data_ref) == 0)
            temp->next = temp->next->next;
        temp = temp->next;
        *begin = temp;
    }
    return (0);
}
