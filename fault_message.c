/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** fault_message.c
*/

#include "libmy.h"

void print_fault_msg_zsh(char *buffer)
{
        my_putstr(buffer);
        my_putstr(": Command not found.");
        my_putchar('\n');
}

void print_fault_msg_cd(char *cd_tab)
{
    my_putstr(cd_tab);
    my_putstr(": Not a directory.");
    my_putchar('\n');
}

void print_fault_msg_cd_2(char *cd_tab)
{
    my_putstr(cd_tab);
    my_putstr(": No such file or directory.");
    my_putchar('\n');
}
