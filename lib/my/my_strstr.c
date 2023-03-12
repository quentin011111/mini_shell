/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** my_strstr.c
*/

#include "libmy.h"

bool my_strstr(char *str, char *to_find)
{
    int j = 0;
    int temp = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (to_find[j] == '\0')
            return (true);
        if (str[temp] == to_find[j]) {
            temp++;
            j++;
            continue;
        }
        temp++;
        i++;
    }
    return (false);
}
