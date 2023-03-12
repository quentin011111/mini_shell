/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** create_pwd_path.c
*/

#include "libmy.h"

int line_pwd(char **env)
{
    int i = 0;
    for (; env[i] != NULL; i++) {
        if (my_strstr(env[i], "PWD") == true && env[i][0] == 'P')
            return (i);
    }
    return (0);
}

int size_line_pwd(char **env)
{
    int size = 0;
    for (int i = 0; env[i] != NULL; i++) {
        if (my_strstr(env[i], "PWD") == true && env[i][0] == 'P') {
            size = my_strlen(env[i]);
            return (size);
        }
    }
    return (0);
}

char *get_line_pwd(char **env)
{
    int pwd_line = line_pwd(env);
    int size = size_line_pwd(env);
    char *pwd_tab = malloc(sizeof(char) * (size + 1));
    pwd_tab = env[pwd_line];
    return (pwd_tab);
}

char *set_tab_pwd(char **env)
{
    int i = 0;
    int compteur = 0;
    char *tab = get_line_pwd(env);
    int size_tab = size_line_pwd(env);
    char *new_tab = malloc(sizeof(char) * (size_tab + 1));
    for (; tab[i] == 'P' || tab[i] == 'W' || tab[i] == 'D'
    || tab[i] == '='; i++);
    for (; tab[i] != '\0'; i++, compteur++)
        new_tab[compteur] = tab[i];
    return (new_tab);
}
