/*
** EPITECH PROJECT, 2026
** my_compute_power_rec.c
** File description:
** compute the power of an int in rec
*/

int my_compute_power_rec(int nb, int p)
{
    if (p != 0)
        return (nb * my_compute_power_rec(nb, p - 1));
    else
        return (1);
}
