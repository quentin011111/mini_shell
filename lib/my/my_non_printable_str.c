/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_non_printable_str.c
*/

#include "../../include/libmy.h"

char my_non_printable_str(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        (str[i] == ' ') ? my_putstr("\\t") && i++ :
        (str[i] == '\a') ? my_putstr("\\a") && i++ :
        (str[i] == '\b') ? my_putstr("\\b") && i++ :
        (str[i] == '\n') ? my_putstr("\\n") && i++ :
        (str[i] == '\v') ? my_putstr("\\v") && i++ :
        (str[i] == '\f') ? my_putstr("\\f") && i++ :
        (str[i] > 50) ? my_putchar(str[i]) : my_putstr("  ");
        i++;
    }
    return (0);
}
