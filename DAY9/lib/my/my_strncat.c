/*
** EPITECH PROJECT, 2026
** my_strncat.c
** File description:
** cat n bytes of str
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;
    int destlenght;

    while (dest[i]) {
        i++;
    }
    destlenght = i;
    i = 0;
    while (j != nb || src[j]) {
        dest[destlenght + i] = src[j];
        i++;
        j++;
    }
    dest[destlenght + i] = '\0';
    return (dest);
}
