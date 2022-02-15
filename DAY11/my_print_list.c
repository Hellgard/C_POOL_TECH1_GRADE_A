/*
** EPITECH PROJECT, 2021
** my_print_list.c
** File description:
** printlist
*/
#include "mylist.h"
#include "my.h"
#include <stddef.h>

void print_list(linked_list_t *list)
{

    while (list != NULL) {
        my_putstr(list->data);
        list = list->next;
    }
}
