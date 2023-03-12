/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putnbr_long_unsigned.c
*/

#include "../../include/libmy.h"

void my_putnbr_long_unsigned(unsigned long nbr, char *base)
{
    int i = 0;
    int size;
    long nb;

    size = my_strlen(base);
    if (nbr > 0) {
        nb = nbr;
        nbr /= size;
        i += my_putnbr_long(nbr, base);
        i++;
        my_putchar(base[nb % size]);
    }
}
