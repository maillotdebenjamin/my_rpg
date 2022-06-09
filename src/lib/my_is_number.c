/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_is_number.c
*/
#include "my_lib.h"

int my_is_int_number(char *str)
{
    if (!str || *str == '0' || *str == '-') {
        return (0);
    }
    for (int i = 0; str[i]; i++) {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            return (0);
        }
    }
    return (1);
}
