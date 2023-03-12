/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putchar.c
*/

#include <unistd.h>
#include "../../include/libmy.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
