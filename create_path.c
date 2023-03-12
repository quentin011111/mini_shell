/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** create_path.c
*/

#include "libmy.h"

int get_line_path(char **env)
{
    for (int i = 0; env[i] != NULL; i++)
        if (condi_for_get_line(env[i]))
            return (i);
    return (0);
}

char *create_path_tab(char **env)
{
    int line_path = get_line_path(env);
    char *path = malloc(sizeof(char) * (my_strlen(env[line_path] + 1)));
    my_strcpy(path, env[line_path]);
    return (path);
}

char **transform_path_to_tab2d(char **env)
{
    int compteur = 0;
    int i = 0;
    char *path_tab_1 = NULL;
    int size_line_1 = 0;
    char *tab_path = create_path_tab(env);
    char **new_tab_path = str_to_word_array(tab_path);
    size_line_1 = my_strlen(new_tab_path[0]);
    path_tab_1 = malloc(sizeof(char) * (size_line_1 + 1));
    for (; new_tab_path[0][i] == 'P'
    || new_tab_path[0][i] == 'A' || new_tab_path[0][i] == 'T'
    || new_tab_path[0][i] == 'H' || new_tab_path[0][i] == '='; i++);
    for (; new_tab_path[0][i] != '\0'; i++, compteur++)
        path_tab_1[compteur] = new_tab_path[0][i];
    new_tab_path[0] = my_strcpy(new_tab_path[0], path_tab_1);
    return (new_tab_path);
}
