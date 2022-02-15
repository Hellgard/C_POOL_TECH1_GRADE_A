/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** str to word arr
*/
#include <stdlib.h>

int my_strlen(char const *str);

int number_of_words(char const *str)
{
    int words = 0;
    int nbr_words = 0;

    while (str[words]) {
        if (str[words] >= 32 && str[words] <= 47) {
            if (str[words + 1] > 47)
                nbr_words++;
        }
        words++;
    }
    nbr_words++;
    return (nbr_words);
}

int lenght_of_word(char const *str, int i)
{
    int lenght_word =  0;

    while (str[i] > 47) {
        i = i + 1;
        lenght_word++;
    }
    return (lenght_word);
}

char *stock_of_word(char const *str, int *i)
{
    int stock = 0;
    char *str_stock = malloc(sizeof(char) * lenght_of_word(str, *i) + 1);

    while (str[*i] > 47) {
        str_stock[stock] = str[*i];
        *i = *i + 1;
        stock++;
    }
    while (str[*i] <= 46) {
        *i = *i + 1;
    }
    return (str_stock);
}

char **str_to_word_array(char const *str)
{
    int i = 0;
    int c = 0;
    char **arr = malloc(sizeof(char*) * my_strlen(str) * number_of_words(str));

    while (c < number_of_words(str)) {
        arr[c] = malloc(sizeof(char) * lenght_of_word(str, i));
        arr[c] = stock_of_word(str, &i);
        c++;
    }
    return (arr);
}

int main()
{
    char const *str = "hello, guys how are you";
    char **arr = str_to_word_array(str);
    int i = 0;
    while (arr[i]) {
        printf("%s\n", arr[i]);
        i++;
    }
    return (0);
}
