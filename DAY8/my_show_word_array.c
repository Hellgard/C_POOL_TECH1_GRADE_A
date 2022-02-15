/*
** EPITECH PROJECT, 2021
** my_show_word_array.c
** File description:
** display word array
*/

void my_putchar(char c);

void my_putstr(char const *str);

int my_arrlen(char *const *tab)
{
    int i = 0;

    while (tab[i]) {
        i++;
    }
    return (i);
}

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (i != my_arrlen(tab)) {
        my_putstr(tab[i]);
        i++;
    }
    return (0);
}
