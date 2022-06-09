/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sort_fist_str.c
*/
#include <stdlib.h>
#include <stdio.h>

int is_delimiter(char c, char const *separation)
{
    int i = 0;

    if (!separation) {
        return (0);
    }
    for (; separation[i]; i++) {
        if (separation[i] == c) {
            return (1);
        }
    }
    return (0);
}

int len_word_sort(char *str, char const *delimiter)
{
    int i = 0;

    if (str) {
        while (str[i] && is_delimiter(str[i], delimiter) == 1) {
            i++;
        }
        while (str[i] && is_delimiter(str[i], delimiter) == 0) {
            i++;
        }
    }
    return (i);
}

char *sort_first_word(char **str, char const *delimiter)
{
    int len = len_word_sort(*str, delimiter);
    char *result = malloc(sizeof(char) * len + 1);
    int y = 0;
    int i = 0;

    while ((*str)[i] && is_delimiter((*str)[i], delimiter) == 1) {
        i++;
    }
    for (; (*str)[i] && is_delimiter((*str)[i], delimiter) == 0; i++, y++) {
        result[y] = (*str)[i];
    }
    result[y] = '\0';
    *str = &(*str)[len];
    return (result);
}