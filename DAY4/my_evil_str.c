/*
** EPITECH PROJECT, 2026
** my_evil_str.c
** File description:
** print in reverse the str
*/
#include <unistd.h>

int my_strlen(char const *str);
void my_putchar(char c);

char *my_evil_str(char *str)
{
    char temp;
    int i = 0;
    int last = my_strlen(str) - 1;

    while(i < last) {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        i++;
        last--;
    }
    return (str);
}
