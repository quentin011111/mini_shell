/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-malo.coet
** File description:
** cond2.c
*/

#include <stdarg.h>
#include "../../include/libmy.h"

void cond2 (const char *format, int i, va_list list)
{
    if (format[i + 1] == 'c') {
        my_putchar((char) va_arg(list, int));
    }
    if (format[i + 1] == 'C') {
        my_putchar((char) va_arg(list, int));
    }
    if (format[i + 1] == '%') {
        my_putchar('%');
    }
    if (format[i + 1] == 'x') {
        hexa_convertor(va_arg(list, long));
    }
    if (format[i + 1] == 'f') {
        my_putfloat(va_arg(list, double));
    }
}
