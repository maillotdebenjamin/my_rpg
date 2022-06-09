/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** task03 revstr
*/
#include "my_lib.h"

char *my_revstr_static(char *str)
{
    int len = my_strlen(str) - 1;
    int i = 0;
    char save;

    while (i != my_strlen(str) / 2) {
        save = str[i];
        str[i] = str[len];
        str[len] = save;
        len = len - 1;
        i = i + 1;
    }
    str[my_strlen(str)] = '\0';
    return (str);
}
