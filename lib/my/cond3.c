/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-malo.coet
** File description:
** cond3.c
*/

#include <stdarg.h>
#include "../../include/libmy.h"

void cond3 (const char *format, int i, va_list list)
{
    if (format[i + 1] == 'X') {
        hexa_convertor_up(va_arg(list, int));
    }
    if (format[i + 1] == 'p') {
        my_putstr("0x");
        hexa_convertor(va_arg(list, long));
    }
    if (format[i + 1] == 'o') {
        convert_octal(va_arg(list, long));
    }
    if (format[i + 1] == 'u') {
        my_putnbr_long_unsigned(va_arg(list, int), "0123456789");
    }
    if (format[i + 1] == 'b') {
        convertor_binaire(va_arg(list, unsigned long int));
    }
}
