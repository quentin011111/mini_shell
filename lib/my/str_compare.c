/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** str_compare.c
*/

#include "libmy.h"

bool str_compare(char *str, char *str2)
{
    bool compare = true;
    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] != str2[i])
            compare = false;
    }
    return (compare);
}
