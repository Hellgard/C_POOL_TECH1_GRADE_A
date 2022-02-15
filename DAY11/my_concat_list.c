/*
** EPITECH PROJECT, 2021
** my_concat_list.c
** File description:
** concat list
*/
#include "my.h"
#include "mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *concat = *begin1;

    if (concat == 0)
        *begin1 = begin2;
    else {
        while (concat) {
            concat = concat->next;
            concat = *begin2;
        }
        while (*begin1) {
            *begin1 = concat;
    }
}
