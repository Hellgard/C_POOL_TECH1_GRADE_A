/*
** EPITECH PROJECT, 2021
** my_sort_word_array.c
** File description:
** sort word array in ascii order
*/
#include <stdlib.h>

char *my_putstr(char const *str);

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2);

char **str_to_word_array(char const *str);

int my_sort_word_array(char **tab)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *temp;

    while (k < 10) {
        while (tab[i + 1]) {
            if (my_strcmp(tab[i], tab[i + 1]) > 0) {
                temp = malloc(sizeof(char) * my_strlen(tab[i]) + 1);
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
            i++;
        }
        i = 0;
        k++;
    }
    i = 0;
    while (tab[i]) {
        my_putstr(tab[i]);
        i++;
    }
    return (0);
}
