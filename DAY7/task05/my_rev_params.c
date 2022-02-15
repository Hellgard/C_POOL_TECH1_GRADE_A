/*
** EPITECH PROJECT, 2021
** my_rev_params.c
** File description:
** reverse params
*/

void my_putchar(char c);

int my_putstr(char const *str);

void my_rev_params(int argc, char *argv[])
{
    int i = 0;
    int k = 0;

    while (k < argc) {
        k++;
    }
    k--;
    while (i < argc) {
        my_putstr(argv[k]);
        i++;
        k--;
    }
}
