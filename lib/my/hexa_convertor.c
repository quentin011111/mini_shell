/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** hexa_convertor.c
*/

#include "../../include/libmy.h"

void hexa_convertor(long dec_nbr)
{
    char hexa_array[9999];
    int i = 0;
    int stock = 0;
    int j;

    while (dec_nbr != 0){
        stock = dec_nbr % 16;
        if (stock < 10){
            hexa_array[i] = stock + 48;
            i++;
        }else{
            hexa_array[i] = stock + 87;
            i++;
        }
        dec_nbr = dec_nbr / 16;
    }
    for (j = i - 1; j >= 0; j--){
        my_putchar(hexa_array[j]);
    }
}
