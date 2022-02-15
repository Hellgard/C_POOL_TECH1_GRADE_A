/*
** EPITECH PROJECT, 2026
** my_compute_factorial_it.c
** File description:
** compute the factorial
*/

#include <unistd.h>

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int factorial = nb;

    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    }
    while (i < factorial) {
        nb = nb * (factorial - i);
        i++;
    }
    return (nb);
}
