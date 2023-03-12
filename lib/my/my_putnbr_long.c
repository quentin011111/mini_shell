/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putnbr_long.c
*/

#include "../../include/libmy.h"

int my_putnbr_long(long nbr, char *base)
{
    int i = 0;
    int size;
    long nb;

    if (nbr < 0) {
        nbr = - nbr;
        i++;
        my_putchar('-');
    }
    size = my_strlen(base);
    if (nbr > 0) {
        nb = nbr;
        nbr /= size;
        i += my_putnbr_long(nbr, base);
        i++;
        my_putchar(base[nb % size]);
    }
    return (i);
}
