/*
** EPITECH PROJECT, 2026
** my_swap.c
** File description:
** swap two pointer
*/
#include <unistd.h>

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
