/*
** EPITECH PROJECT, 2021
** my_concat_params.c
** File description:
** concat params
*/
#include <stdlib.h>

int my_cat(char *dest, char const *src, int destlen)
{
    int j = 0;

    while (src[j]) {
        dest[destlen] = src[j];
        destlen++;
        j++;
    }
    return (destlen);
}

int lenght_argv(int argc, char *argv[])
{
    int i = 0;
    int j = 0;

    while (i < argc) {
        while (argv[i][j]) {
            j++;
        }
        i++;
    }
    return (j + i);
}

char *concat_params(int argc, char *argv[])
{
    int i = 0;
    char *str = malloc(sizeof(char) * lenght_argv(argc, argv));
    int destlen = 0;

    while (i < argc) {
        destlen = my_cat(str, argv[i], destlen);
        str[destlen] = '\n';
        destlen++;
        i++;
    }
    str[destlen - 1] = '\0';
    return (str);
}
