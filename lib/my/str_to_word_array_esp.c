/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** str_to_word_array_esp.c
*/

#include "libmy.h"

int esp_between_word(char *str)
{
    int esp = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            esp++;
    }
    return (esp);
}

int nb_word_esp(char *str)
{
    int nb_word = 0;
    int i = 0;
    for (; str[i] == ' ' || str[i] == '\t'; i++);
    i++;
    for (; str[i] != '\0'; i++) {
        if ((str[i] >= 33 && str[i] <= 126)
        && str[i - 1] == ' ')
            nb_word++;
    }
    return (nb_word + 1);
}

char **str_to_word_array_esp(char *str)
{
    int compteur = 0;
    int ch = 0;
    int len_words = 0;
    int nb_words = nb_word_esp(str);
    char **new_str = malloc(sizeof(char*) * (nb_words + 1));
    for (int i = 0; i < nb_words; i++, ch++) {
        for (; str[compteur] == ' ' || str[compteur] == '\t'; compteur++, ch++);
        for (; str[compteur] != ' ' && str[compteur] && str[compteur] != '\t'
        != '\0'; compteur++, len_words++);
        compteur++;
        new_str[i] = malloc(sizeof(char) * len_words + 1);
        new_str[i][len_words] = '\0';
        for (int j = 0; j < len_words; j++, ch++) {
            new_str[i][j] = str[ch];
        }
        len_words = 0;
    }
    return (new_str);
}
