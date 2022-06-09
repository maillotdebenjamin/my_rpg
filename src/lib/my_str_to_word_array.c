/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** splits a string into words
*/
#include <stdlib.h>
#include <stdio.h>

int is_separation(char c, char const *separation)
{
    int i = 0;

    if (!separation || !c) {
        return (0);
    }
    for (; separation[i]; i++) {
        if (separation[i] == c) {
            return (1);
        }
    }
    return (0);
}

int len_word(char const *str, char const *separation, int y)
{
    int result = 0;

    if (!str || !separation) {
        return (0);
    }
    for (; str[y] &&
    is_separation(str[y], separation) == 0; y++, result += 1) {
    }
    return (result);
}

char *get_str(char const *str, char const *separation, int *y)
{
    char *copy = malloc(sizeof(char) * len_word(str, separation, *y) + 1);
    int i = 0;

    for (; str[*y] && is_separation(str[*y], separation) == 0; i++, *y += 1) {
        copy[i] = str[*y];
    }
    copy[i] = '\0';
    return (copy);
}

int nbr_word(char const *str, char const *separation)
{
    int i = 0;
    int result = 0;

    if (!str) {
        return (0);
    }
    for (; str[i]; i++) {
        if (is_separation(str[i], separation) == 0 &&
        (!str[i + 1] || is_separation(str[i + 1], separation) == 1)) {
            result += 1;
        }
    }
    return (result);
}

char **my_str_to_word_array(char const *str, char const *separation)
{
    int len = nbr_word(str, separation);
    char **tab = malloc(sizeof(char *) * (len + 1));
    int i = 0;
    int y = 0;

    for (; i < len; i++) {
        while (str[y] && is_separation(str[y], separation) == 1) {
            y++;
        }
        tab[i] = get_str(str, separation, &y);
    }
    tab[i] = NULL;
    return (tab);
}