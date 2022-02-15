/*
** EPITECH PROJECT, 2026
** my_print_revalpha
** File description:
** print the alphabet in reverse
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    char letters = 'z';

    while (letters >= 'a') {
        my_putchar(letters);
        letters--;
    }
    return (0);
}
