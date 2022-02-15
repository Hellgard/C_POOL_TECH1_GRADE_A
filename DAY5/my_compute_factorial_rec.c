/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec.c
** File description:
** compute the factorial of a number in rec
*/

#include <unistd.h>

int my_compute_factorial_rec(int nb)
{
    int resultat;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);

    resultat = nb * my_compute_factorial_rec(nb - 1);
    return (resultat);
}
