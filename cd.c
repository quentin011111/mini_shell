/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** d.c
*/

#include "libmy.h"

void error_gestion_cd(char *home)
{
    struct stat stats;
    DIR *dp = NULL;

    dp = opendir(home);
    if (stat(home, &stats) == -1) {
        print_fault_msg_cd_2(home);
        return;
    }
    if (dp == NULL) {
        print_fault_msg_cd(home);
        return;
    }
}

int cd_begin(char *buffer, char **env, char *home)
{
    char *pwd = set_tab_pwd(env);
    int compteur = 1;
    int nb_ch_begin_pwd = 0;

    if (buffer[0] == 'c' && buffer[1] == 'd' && buffer[2] == '\n') {
        for (; pwd[compteur] != '/'; compteur++, nb_ch_begin_pwd++);
        compteur++;
        for (; pwd[compteur] != '/'; compteur++, nb_ch_begin_pwd++);
        home = malloc(sizeof(char) * (nb_ch_begin_pwd + 1));
        for (int i = 0; i <= nb_ch_begin_pwd + 1; i++)
            home[i] = pwd[i];
        chdir(home);
        return (0);
    }
    return (-1);
}

int cd_before(char *buffer)
{
    if (buffer[0] == 'c' && buffer[1] == 'd' && buffer[2] == ' '
    && buffer[3] == '.' && buffer[4] == '.' && buffer[5] == '\n') {
        chdir("..");
        return (0);
    }
    return (-1);
}

int cd_cd(char *buffer, char *home)
{
    int compteur_2 = 0;
    int size_tab = 0;
    int nb_after_cd = 2;
    int size_buff = my_strlen(buffer);

    if (my_strstr(buffer, "cd") == true) {
        home = malloc(sizeof(char) * (size_buff));
        for (; buffer[nb_after_cd] == ' ' || buffer[nb_after_cd] == '\t';)
            nb_after_cd++;
        for (; buffer[nb_after_cd] != '\0'; nb_after_cd++, compteur_2++)
            home[compteur_2] = buffer[nb_after_cd];
        size_tab = my_strlen(home);
        home[size_tab - 1] = '\0';
        error_gestion_cd(home);
        chdir(home);
        return (0);
    }
    return (-1);
}

void do_cd_simple(char *buffer, char **env)
{
    char *home = NULL;

    if (cd_begin(buffer, env, home) == 0)
        return;
    if (cd_before(buffer) == 0)
        return;
    if (cd_cd(buffer, home) == 0)
        return;
    free(home);
}
