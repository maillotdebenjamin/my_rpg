/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strlen.c
*/
#include "my_lib.h"

int my_strlen(char const *str)
{
    int i = 0;

    if (!str) {
        return (i);
    }
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}