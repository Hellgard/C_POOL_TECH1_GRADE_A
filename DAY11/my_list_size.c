/*
** EPITECH PROJECT, 2021
** my_list_size.c
** File description:
** lenght of list
*/
#include "mylist.h"
#include "my.h"
#include <stdlib.h>

int my_put_nbr(int nb);

linked_list_t *my_params_to_list(int ac, char * const *av);

int my_list_size (linked_list_t const *begin)
{
    int size = 0;

    while (begin != NULL) {
        begin = begin->next;
        size++;
    }
    return (size);
}
