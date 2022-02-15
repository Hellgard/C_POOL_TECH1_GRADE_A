/*
** EPITECH PROJECT, 2026
** my_print_comb2
** File description:
** print all of the combination of 4 digits
*/
#include <unistd.h>

void my_putchar(char c);

void comb2(char a, char b, char c, char d)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(' ');
    my_putchar(c);
    my_putchar(d);

    if (a != '9' || b != '8' || c != '9' || d != '9') {
        my_putchar(',');
        my_putchar(' ');
    }
}

int printcomb(char a, char b, char c, char d)
{
    if (a <= c) {
        if (a == c && b >= d) {
            return (0);
        }
        else {
            comb2(a, b, c, d);
        }
    }
    return (0);
}

int sup_nbr(char a, char b, char c, char d)
{
    while (a < '9' + 1) {
        if (d == '9' + 1) {
            c += 1;
            d = '0';
        }
        if (c == '9' + 1) {
            b += 1;
            c = '0';
        }
        if (b == '9' + 1) {
            a += 1;
            b = '0';
        }
        printcomb(a, b, c, d);
        d += 1;
    }
    return (0);
}

int my_print_comb2(void)
{
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '0';

    sup_nbr(a, b, c, d);
    return (0);
}
