/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_find.c
*/

#include "../../include/libmy.h"

int my_find (char a)
{
    if (a == '%') {
        return 1;
    }
    if ((a + 1) == '#') {
        return 2;
    } else {
        return 0;
    }
}
