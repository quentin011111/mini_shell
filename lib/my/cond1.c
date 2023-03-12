/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-malo.coet
** File description:
** cond1.c
*/

#include <stdarg.h>
#include "../../include/libmy.h"

void cond1 (const char *format, int i, va_list list)
{
    if (format[i + 1] == 'd') {
        my_putnbr(va_arg(list, int));
    }
    if (format[i + 1] == 'i') {
        my_putnbr(va_arg(list, int));
    }
    if (format[i + 1] == 's') {
        my_putstr(va_arg(list, const char*));
    }
    if (format[i + 1] == 'S') {
        my_non_printable_str(va_arg(list, const char*));
    }
    if (format[i + 1] == 'g') {
        my_putfloat(va_arg(list, double));
    }
}
