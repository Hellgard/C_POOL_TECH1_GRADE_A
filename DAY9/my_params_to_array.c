/*
** EPITECH PROJECT, 2021
** my_params_to_array.c
** File description:
** params to arr
*/
#include "include/my.h"
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src);

char **str_to_word_array(char const *str);

char *my_strcpy(char *dest, char const *src);

struct info_param
{
    int lenght;
    char *str;
    char *copy;
    char **word_array;
};

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param **arr = malloc(sizeof(struct info_param) * (ac + 1));

    if (av[i] == 0)
        return (0);
    while (i < ac) {
        arr[i] = malloc(sizeof(struct info_param) + 100);
        arr[i]->lenght = my_strlen(av[i]);
        arr[i]->str = av[i] + '\0';
        arr[i]->copy = my_strcpy(arr[i], av[i]);
        arr[i]->word_array = str_to_word_array(av[i]);
        i++;
    }
    *arr[i]->str = '0';
    return (*arr);
}
