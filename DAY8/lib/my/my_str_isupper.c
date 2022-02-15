/*
** EPITECH PROJECT, 2026
** my_str_isupper
** File description:
** check if str is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}
