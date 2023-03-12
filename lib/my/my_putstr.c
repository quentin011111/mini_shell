/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putstr.c
*/

#include "../../include/libmy.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
