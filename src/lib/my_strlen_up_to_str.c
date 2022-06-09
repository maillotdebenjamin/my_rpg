/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strlen_up_to_str.c
*/
#include "my_lib.h"

int my_strlen_up_to_str(char *str, char *limite)
{
    int result = 0;

    if (!str || !limite) {
        write(2, "str up to char NULL", 20);
        return (0);
    }
    while (str[result] && my_is_in_str(str[result], limite) == 0) {
        result++;
    }
    return (result);
}