/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** convertor_binaire.c
*/

#include "../../include/libmy.h"

void convertor_binaire(unsigned long int a)
{
    int i = 0;
    int tab[a];
    int res = 0;
    while (a != 0) {
        res = a % 2;
        tab[i] = res;
        a = a / 2;
        i++;
    }
    int b = 1;
    int c = 0;
    while (c < i) {
        my_putnbr(tab[i - b]);
        b++;
        c++;
    }
}
