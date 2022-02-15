/*
** EPITECH PROJECT, 2021
**
** File description:
**
*/
#include <unistd.h>

void my_putchar(char c);

void comb(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);

    if (a != '7' || b != '8' || c != '9') {
        my_putchar(',');
        my_putchar(' ');
    }
}

int print_comb(char a, char b, char c)
{
    if (a <= b && b <= c) {
        if (a == b || b == c) {
            return (0);
        }
        else {
            comb(a, b, c);
        }
    }
    return (0);
}

int supp_nbr(char a, char b, char c)
{
    while (a >= '0' && a <= '9') {
        if (c == '9' + 1) {
            b ++;
            c = '0';
        }
        if (b == '9' + 1) {
            a ++;
            b = '0';
        }
        print_comb(a, b, c);
        c++;
    }
    return (0);
}

int my_print_comb(void)
{
    char a = '0';
    char b = '0';
    char c = '0';

    supp_nbr(a, b, c);
    return (0);
}
