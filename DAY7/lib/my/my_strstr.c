/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** find a str in a str
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        while (to_find[j] == str[i + j]) {
            if (to_find[j + 1] == '\0')
                return (str + i);
            j++;
        }
        i++;
    }
}
