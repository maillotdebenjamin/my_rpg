/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_lib.h
*/
#ifndef MY_LIB_H_
    #define MY_LIB_H_
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

int my_getnbr(char const *str);
int my_is_int_number(char *str);
int my_is_in_str(char c, char const *str);
int return_bigger_str(char const *s1, char const *s2);
int my_strcmp(char const *s1, char const *s2);
char *my_revstr(char *str, int free_or_not);
char *my_revstr_static(char *str);
char **my_str_to_word_array(char const *str, char const *separation);
char *my_strcat_static(char *dest, char const *src);
char *my_strcpy(char *dest, char const *scr);
char *my_strdup(char const *str);
int my_strlen_up_to_char(char *str, char c);
int my_strlen_up_to_str(char *str, char *limite);
int my_str_char_cmp(
char *str, char *first_word_str, char *limite_str, char *limite_first_word);
char *my_strncpy(char *scr, char *dest, char limite);
char *nb_change_to_str(int nb);
char *return_first_word_static(char *str, char *copy, char delimiter);
char *return_first_word(char *str, char delimiter);
int my_strlen_clean_str(char *str, char *c_to_sup);
char *sort_first_word(char **str, char const *delimiter);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
int open_read_whith_getline(char **buffer, char *filepath);

#endif