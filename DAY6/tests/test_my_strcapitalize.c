/*
** EPITECH PROJECT, 2021
** test_my_strcapitalize.c
** File description:
** test of strcapitalize
*/
#include <criterion/criterion.h>

Test (my_strcapitalize, capitalize_a_string)
{
    char str[] = "Hello";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "HELLO");
}
