/*
** EPITECH PROJECT, 2021
** my_rev_list.c
** File description:
** rev list
*/
#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *list = *begin;
    linked_list_t *temp = NULL;
    linked_list_t *temp_next;

    while (list) {
        temp_next = list->next;
        list->next = temp;
        temp = list;
        list = temp_next;
    }
    *begin = temp;
}
