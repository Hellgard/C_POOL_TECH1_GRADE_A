/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** compute the square root of an int
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i != nb) {
        if ((i * i) > nb) {
            return (0);
        }
        else if ((i * i) < nb) {
        i++;
        }
        else if ((i * i) == nb) {
            return (i);
        }
    }
    return (0);
}
