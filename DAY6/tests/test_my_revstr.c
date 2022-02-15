/*
** EPITECH PROJECT, 2026
** test_my_revstr
** File description:
** test
*/
#include <criterion/criterion.h>

Test (my_revstr, reverse_an_array)
{
    char dest[] = "Hello";
    my_revstr(dest);
    cr_assert_str_eq(dest, "olleH");
}
