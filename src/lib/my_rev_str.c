/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_rev_str.c
*/
#include "my_lib.h"

char *my_revstr(char *str, int free_or_not)
{
    int len = my_strlen(str) - 1;
    char *copy = malloc(sizeof(char) * (len + 2));
    int i = 0;

    for (; len >= 0; len -= 1, i++) {
        copy[i] = str[len];
    }
    copy[i] = '\0';
    if (free_or_not == 1) {
        free(str);
    }
    return (copy);
}
