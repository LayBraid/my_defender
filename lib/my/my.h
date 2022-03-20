/*
** EPITECH PROJECT, 2021
** MY_LS
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_LS_MY_H
    #define MY_LS_MY_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdarg.h>

char *my_strcpy(char *dest, char const *src);

char *my_strcat_c(char *dest, char const src);

char *my_itoa(int nb);

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

int my_rand(int i, int j);

int my_isdigit(char digit);

int my_int_len(int nb);

char *my_revstr(char *str);

char *convert_decimal_to_any(int nb, int base);

char *my_itoa(int nb);

char *my_str_upcase(char *str);

char *my_str_lowcase(char *str);

char *convert_decimal_to_any_long(long nb, int base);

char *my_strncpy(char *dest, char const *src, int n);

int my_getnbr(char *str);

int my_str_contains_c(char c, char *str);

int my_strcmp(char const *s1, char const *s2);

int my_atoi(char *str);

int my_array_str_sort(char **array, int nb);

int nb_files_in_path(char *path);

char *my_strdup(char const *src);

int my_str_isnumber(char const *str);

void my_strcat_3(char **dest, char const *src);

#endif
