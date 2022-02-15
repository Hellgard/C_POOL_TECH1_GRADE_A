/*
** EPITECH PROJECT, 2026
** my_find_prime_sup.c
** File description:
** found the supperior prime number
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb > 2 && nb % 2 == 0) {
        nb++;
    }
    while (!my_is_prime(nb)) {
        nb += 2;
    }
    return (nb);
}
