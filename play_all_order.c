/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** play_all_order.c
*/

#include"libmy.h"

int order_with_directly_path(char *buffer, char **buffer_cpy, char **env)
{
    if (buffer[0] == '/') {
        buffer_cpy = str_to_word_array_esp(buffer);
        if (access(buffer_cpy[0], X_OK) == 0) {
            execve(buffer_cpy[0], buffer_cpy, env);
            return (0);
        }
    }
    return (-1);
}

char* esp_before_buffer(char *buffer)
{
    int esp_tab_buff = 0;
    char *new_buffer = NULL;
    int new_buff_i = 0;

    for (; buffer[esp_tab_buff] == ' '
        || buffer[esp_tab_buff] == '\t'; esp_tab_buff++);
    new_buffer = malloc(sizeof(char) * (my_strlen(buffer) - esp_tab_buff));
    for (; buffer[esp_tab_buff] != '\0'; esp_tab_buff++, new_buff_i++)
        new_buffer[new_buff_i] = buffer[esp_tab_buff];
    new_buff_i = 0;
    esp_tab_buff = 0;
    return (new_buffer);
}

void fill_tab_for_order(char **path, char *buffer, char **env)
{
    char *print_all = malloc(sizeof(char) * 1000);
    char **buffer_cpy = NULL;
    if (order_with_directly_path(buffer, buffer_cpy, env) == 0)
        return;
    for (int c = 0;  path[c] != NULL; c++) {
        print_all = my_strcat(print_all, path[c]);
        print_all = my_strcat(print_all, "/");
        print_all = my_strcat(print_all, buffer);
        buffer_cpy = str_to_word_array_esp(print_all);
        if (access(buffer_cpy[0], X_OK) == 0) {
            execve(buffer_cpy[0], buffer_cpy, env);
            return;
        } else {
            free_str(buffer_cpy);
            print_all[0] = '\0';
        }
    }
    free(print_all);
    print_fault_msg_zsh(buffer);
}

char **order_shell(char *buffer, char **env)
{
    int nb_esp = 0;
    int i = 0;
    char **path = transform_path_to_tab2d(env);
    i = my_strlen(buffer);
    buffer[i - 1] = '\0';
    for (int compteur = 0; buffer[compteur] != '\0'; compteur++) {
        if (buffer[compteur] == ' ' || buffer[compteur] == '\t')
            nb_esp++;
    }
    if (nb_esp == my_strlen(buffer))
        return (NULL);
    fill_tab_for_order(path, buffer, env);
    return (path);
}
