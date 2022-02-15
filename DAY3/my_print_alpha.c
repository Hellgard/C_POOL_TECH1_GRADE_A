/*
** EPITECH PROJECT, 2026
** My_print_alpha
** File description:
** print the alphabet
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char letters = 'a';

    while (letters <= 'z') {
        my_putchar(letters);
        letters++;
    }
    return (0);
}
