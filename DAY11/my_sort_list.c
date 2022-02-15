/*
** EPITECH PROJECT, 2021
** my_sort_list.c
** File description:
** sort_list
*/

void my_sort_list (linked_list_t **begin, int (*cmp)())
{
    linked_list_t *temp;
    while (temp) {
        if ((*cmp)(temp->data, temp->next->data) < 0) {
            *begin = temp->next;
            temp = temp->next;
            temp->next = *begin;
        }
        *begin = temp;
    }
}
