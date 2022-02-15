/*
** EPITECH PROJECT, 2021
** test_my_strstr.c
** File description:
** test of strstr
*/
#include <criterion/criterion.h>

Test (my_revstr, reverse_an_array)
{
    char str[] = "Hello, marvin_is_back";
    char tofind[] = "marvin";

    cr_assert_str_eq(my_strstr(str, tofind), "marvin_is_back");
}
