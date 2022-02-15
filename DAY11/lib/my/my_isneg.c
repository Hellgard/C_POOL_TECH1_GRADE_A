/*
** EPITECH PROJECT, 2026
** my_isneg
** File description:
** print P or N if the number is positive or NULL or negative
*/
#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
