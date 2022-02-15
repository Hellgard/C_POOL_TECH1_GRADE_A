/*
** EPITECH PROJECT, 2026
** My_print_digits
** File description:
** print the first tenth number
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    char digits = '0';

    while (digits <= '9') {
        my_putchar(digits);
        digits++;
    }
    return (0);
}
