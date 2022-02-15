/*
** EPITECH PROJECT, 2026
** my_strlowcase.c
** File description:
** put in lowcase a string
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z') {
            if (str[i] >= 'a' && str[i] <= 'z')
                j++;
            else
                return ("there is a wrong character in the string");
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32 ;
        i++;
    }
    if (j == i) {
        return (str);
    } else
        return (str);
}
