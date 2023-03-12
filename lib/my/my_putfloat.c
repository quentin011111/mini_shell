/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putfloat.c
*/

#include "../../include/libmy.h"

void my_putfloat(float float_nbr)
{
    long nbr;
    nbr = (long)float_nbr;
    my_putnbr(nbr);
    float_nbr = (float_nbr - nbr) * 1000000;
    nbr = my_abs((long)float_nbr);
    if (my_abs(float_nbr) - nbr >= 0.5f){
        nbr++;
    }
    my_putchar('.');
    my_putnbr(nbr);
    my_putchar('\n');
}
