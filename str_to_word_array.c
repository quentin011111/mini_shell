/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** str_to_word_array.c
*/

#include "libmy.h"
#include "struct.h"

int nb_word(char *str)
{
    int nb_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 33 && str[i] <= 126)
        && str[i - 1] == ':')
            nb_word++;
    }
    return (nb_word + 1);
}

char **str_to_word_array(char *str)
{
    int compteur = 0;
    int ch = 0;
    int len_words = 0;
    int nb_words = nb_word(str);
    char **new_str = malloc(sizeof(char*) * (nb_words + 1));
    new_str[nb_words] = NULL;
    for (int i = 0; i < nb_words; i++, ch++) {
        for (; str[compteur] != ':' && str[compteur]
        != '\0'; compteur++, len_words++);
        new_str[i] = malloc(sizeof(char) * (len_words + 1));
        new_str[i][len_words] = '\0';
        for (; str[compteur] < 33
        || str[compteur] > 126; compteur++);
        for (int j = 0; j < len_words; j++, ch++) {
            new_str[i][j] = str[ch];
        }
        len_words = 0;
        compteur++;
    }
    return (new_str);
}

void free_str(char **str)
{
    for (int i = 0; str[i] != NULL; i++)
        free(str[i]);
    free(str);
}
