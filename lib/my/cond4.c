/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** cond4.c
*/

#include <stdarg.h>
#include "../../include/libmy.h"

void cond4(const char *format, int i, va_list list)
{
    if (format[i + 1] == '#' && format[i + 2] == 'o') {
        my_putchar('0');
        convert_octal(va_arg(list, long));
    }
    if (format[i + 1] == '#' && format[i + 2] == 'x') {
        my_putstr("0x");
        hexa_convertor(va_arg(list, long));
    }
    if (format[i + 1] == '#' && format[i + 2] == 'X') {
        my_putstr("0X");
        hexa_convertor(va_arg(list, long));
    }
}
