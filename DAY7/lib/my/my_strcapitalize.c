/*
** EPITECH PROJECT, 2026
** my_strcapitalize.c
** File description:
** capitalize the first letter of each words
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[0] >= 'a' && str[0] <= 'z') {
            str[0] = str[0] - 32;
            i++;
        }
        if (str[i] == ' ' || str[i] == '-' || str[i] == '+') {
            i++;
            if (str[i] >= 'A' && str[i] <= 'Z')
                i++;
            else
                str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
