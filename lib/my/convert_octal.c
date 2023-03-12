/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** convert_octal.c
*/

#include "../../include/libmy.h"

long convert_octal(long dec)
{
    int octal = 0;
    int i = 1;

    if (dec < 0){
        return (84);
    }
    while (dec != 0) {
        octal += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    my_putnbr_long_unsigned(octal, "0123456789");
    return (octal);
}
