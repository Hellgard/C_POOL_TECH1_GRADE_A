/*
** EPITECH PROJECT, 2026
** my_strupcase
** File description:
** put in upcase a string
*/

char *my_strupcase(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            if (str[i] >= 'A' && str[i] <= 'Z')
                j++;
            else
                return ("there is a wrong character in the string");
        }
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;
        i++;
    }
    if (j == i) {
        return (str);
    }
    else
        return (str);
}
