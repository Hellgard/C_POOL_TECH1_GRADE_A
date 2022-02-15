/*
** EPITECH PROJECT, 2021
** my_opp.h
** File description:
** my_opp . h
*/

#ifndef MY_OPP_
#define MY_OPP_

typedef struct struct_op {
    char op;
    int(*ptr)(int , int);
}opperation;

opperation struct_opp(opperation *mystruct);
int add(int nb1, int nb2);
int sub(int nb1, int nb2);
int multiply(int nb1, int nb2);
int divide(int nb1, int nb2);
int modulo(int nb1, int nb2);
int recup_number(char *str);
char recup_operator(char *str);
int recup_nbr(char *str, int *i);
int recup_zero(char *str, int *i);

#endif
