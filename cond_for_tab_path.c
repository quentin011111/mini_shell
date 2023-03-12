/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** cond_for_tab_path.c
*/

#include "libmy.h"

bool condi_for_get_line(char *env)
{
    if ((my_strstr(env, "PATH=") == true) && (env[0] == 'P'))
        return (true);
    return (false);
}

int condi_for_get_size(char **env, int i)
{
    int size = 0;
    if (my_strstr(env[i], "PATH=") == true && env[i][0] == 'P')
        size++;
    return (size);
}
