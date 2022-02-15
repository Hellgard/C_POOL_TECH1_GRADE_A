/*
** EPITECH PROJECT, 2021
** my_params_to_list.c
** File description:
** list params
*/
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

linked_list_t *arg_in_list(linked_list_t *list, char *str)
{
    linked_list_t *elem;
    elem = malloc(sizeof(linked_list_t));
    elem->data = str;
    elem->next = list;
    return (elem);
}

linked_list_t *my_params_to_list(int ac , char * const *av)
{
    linked_list_t *list = NULL;
    int i = 0;

    while (i < ac) {
        list = arg_in_list(list, av[i]);
        i++;
    }
    return (list);
}
