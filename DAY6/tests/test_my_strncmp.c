/*
** EPITECH PROJECT, 2021
** test_my_strncmp.c
** File description:
** test of strncmp
*/
#include <criterion/criterion.h>

Test (my_strncmp, compare_n_bytes)
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    int n = 3;
    int num;

    num = my_strncmp(s1, s2, n);
    cr_assert_float_eq(num, 0);
}
