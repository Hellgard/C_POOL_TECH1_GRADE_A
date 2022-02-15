/*
** EPITECH PROJECT, 2021
** my_apply_on_matching_nodes.c
** File description:
** apply on matching nodes
*/
#include "mylist.h"
#include "my.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(void *), void const *data_ref, int (*cmp)(void *, void *const *))
{
    while (begin) {
        if ((*cmp)(begin->data, data_ref) == 0)
            (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}
