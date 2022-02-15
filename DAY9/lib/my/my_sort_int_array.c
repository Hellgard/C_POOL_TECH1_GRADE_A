/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** sort a integer array
*/
#include <unistd.h>

void my_swap(int *a, int *b);

void swap_lowest(int *nb1, int *nb2)
{
    if (nb1 > nb2)
        my_swap(nb1, nb2);
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j = 0;

    while (i < size - 1) {
        while (j < size - 1 - i) {
            swap_lowest(&array[j], &array[j + 1]);
            j++;
        }
        i++;
    }
}
