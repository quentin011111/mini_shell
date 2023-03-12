/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** minishell.c
*/

#include "libmy.h"

void child_processor(char *new_buffer, char **env)
{
    int PID = 0;

    PID = fork();
    if (PID == 0) {
        order_shell(new_buffer, env);
    }
    wait(NULL);
}

int activate_shell(char **env)
{
    char *buffer = NULL;
    size_t length = 0;
    while (1) {
        if (isatty(STDIN_FILENO) == 1)
            my_putstr("$> ");
        if (getline(&buffer, &length, stdin) == EOF) {
            return (0);
        }
        char *new_buffer = esp_before_buffer(buffer);
        if (str_compare("exit\n", buffer))
            return (0);
        if (new_buffer[0] == 'c' && new_buffer[1] == 'd'
        && (new_buffer[2] == ' ' || new_buffer[2] == '\t'
        || new_buffer[2] == '\n')) {
            do_cd_simple(new_buffer, env);
        } else {
            child_processor(new_buffer, env);
        }
    }
    return (0);
}

int main(int argc, char **argv, char **env)
{
    (void) argv;
    if (argc != 1)
        return (84);
    activate_shell(env);
}
