/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putnbr.c
*/

#include <unistd.h>
#include "../../include/libmy.h"

void my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 10) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10)
        my_putchar(nb % 10 + '0');
}
