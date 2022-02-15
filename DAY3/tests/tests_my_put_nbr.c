/*
** EPITECH PROJECT, 2026
** test_my_putnbr
** File description:
** main of my_put_nbr
*/
#include <unistd.h>

int my_put_nbr(int nb);
void my_putchar(char c);

int main()
{
    my_put_nbr(23);
    my_putchar('\n');
    my_put_nbr(-23);
    my_putchar('\n');
    my_put_nbr(0);
    return (0);
}
