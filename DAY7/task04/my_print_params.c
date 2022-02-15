/*
** EPITECH PROJECT, 2021
** my_print_params.c
** File description:
** print arguments
*/

void my_putchar(char c);

int my_putstr(char const *str);

void my_print_params(int argc, char *argv[])
{
    int i = 0;
    while (i < argc) {
        my_putstr(argv[i]);
        i++;
    }
}
