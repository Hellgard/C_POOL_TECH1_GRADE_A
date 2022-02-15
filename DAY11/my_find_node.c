/*
** EPITECH PROJECT, 2021
** my_find_node.c
** File description:
** find node matching and return
*/
#include "my.h"
#include "mylist.h"
#include <stddef.h>

linked_list_t *my_find_node(linked_list_t *begin, void const *data_ref, int (*cmp)(void *, void const *))
{
    while (begin) {
        if ((*cmp)(begin->data, data_ref) == 0)
            return (begin);
        begin = begin->next;
    }
    return (NULL);
}
