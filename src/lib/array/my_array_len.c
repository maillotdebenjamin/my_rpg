/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_array_len.c
*/
#include "my_lib.h"

int my_array_char_len(char **array)
{
    int i = 0;

    if (!array) {
        return (0);
    }
    for (; array[i]; i++);
    return (i);
}
