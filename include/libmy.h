/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** libmy.h
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <ncurses.h>
#include "struct.h"
#include <ctype.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <dirent.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/sysmacros.h>
#include <sys/stat.h>
#include <fcntl.h>


#ifndef MYPRINT_H_
    #define MYPRINT_H_

    void my_putchar(char c);
    double my_abs(double x);
    int my_putstr(char const *str);
    int my_find (char a);
    void my_putnbr(int nb);
    int my_strlen(char const *str);
    long convert_octal(long dec);
    int my_putnbr_long(long nbr, char *base);
    void my_putnbr_long_unsigned(unsigned long nbr, char *base);
    void my_putfloat(float f);
    void hexa_convertor(long dec_nbr);
    int check_nsignd(unsigned int a);
    char my_non_printable_str(char const *str);
    void convertor_binaire(unsigned long int a);
    void hexa_convertor_up(int dec_nbr);
    int my_getnbr(char const *str);
    bool str_compare(char *str, char *str2);
    void cond1(const char *format, int i, va_list list);
    void cond2(const char *format, int i, va_list list);
    void cond3(const char *format, int i, va_list list);
    void cond4(const char *format, int i, va_list list);
    char **str_to_word_array(char *str);
    char **str_to_word_array_esp(char *str);
    int nb_word_esp(char *str);
    void free_str(char **str);
    bool my_strstr(char *str1, char *str2);
    char *my_strcat(char *dest, char *src);
    char * my_strcpy(char *dest, char const *src);
    void my_printf( const char * format , ...);
    char** order_shell(char *buffer, char **env);
    char *create_path_tab(char **env);
    bool condi_for_get_line(char *env);
    void do_cd_simple(char *buffer, char **env);
    void print_fault_msg_zsh(char *buffer);
    void print_fault_msg_cd(char *cd_tab);
    int line_pwd(char **env);
    int size_line_pwd(char **env);
    char *get_line_pwd(char **env);
    char *set_tab_pwd(char **env);
    char* esp_before_buffer(char *buffer);
    void print_fault_msg_cd_2(char *cd_tab);

    char **transform_path_to_tab2d(char **env);

#endif /* MYPRINT_H_ */
