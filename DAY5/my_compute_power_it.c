/*
** EPITECH PROJECT, 2026
** my_compute_power_it.c
** File description:
** compute the power of an int
*/

int my_compute_power_it(int nb, int p)
{
    long int nb2 = nb;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    while (p != 1) {
        nb2 = nb2 * nb;
        p = p - 1;
        if (nb2 > 2147483647 || nb2 < -2147483648)
            return (0);
    }
    return (nb2);
}

int main()
{
    return(my_compute_power_it(6, 4));

}
