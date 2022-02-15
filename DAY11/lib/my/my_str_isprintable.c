/*
** EPITECH PROJECT, 2026
** my_str_isprintable.c
** File description:
** check if str is printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= '!' && str[i] <= '~')
            i++;
        else
            return (0);
    }
    return (1);
}
