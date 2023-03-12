/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../../include/libmy.h"

void my_printf( const char * format , ...)
{
    va_list list;
    va_start(list, format);
    int i = 0;

    while (i <= my_strlen(format)) {
        int c = my_find(format[i]);
        if (c == 1) {
            cond1(format, i, list);
            cond2(format, i, list);
            cond3(format, i, list);
            cond4(format, i, list);
            i++;
        }
        if (format[i + 3] != '#' && c != 1){
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
}
