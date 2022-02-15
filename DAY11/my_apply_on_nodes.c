/*
** EPITECH PROJECT, 2021
** my_apply_on_nodes
** File description:
** apply function on nodes
*/
#include "mylist.h"
#include "my.h"



int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    while (begin) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}
