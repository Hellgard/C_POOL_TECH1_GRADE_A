/*
** EPITECH PROJECT, 2026
** my_strcat
** File description:
** cat string
*/

char *my_strcat(char *dest, char const *src)
{
    int destlen;
    int i = 0;
    int j = 0;

    while (dest[i]) {
        i++;
    }
    destlen = i;
    i = 0;
    while (src[j] != '\0') {
        dest[destlen] = src[j];
        destlen++;
        j++;
    }
    dest[destlen + 1] = '\0';
    return (dest);
}
