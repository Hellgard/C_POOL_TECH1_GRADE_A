/*
** EPITECH PROJECT, 2026
** my_is_prime.c
** File description:
** found if nb is prime
*/

int my_is_prime(int nb)
{
    int i = 2;

    while (i != nb + 1) {
        if (i == nb)
            return (1);
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (0);
}
