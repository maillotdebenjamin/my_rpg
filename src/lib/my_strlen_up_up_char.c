/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strlen_up_up_char.c
*/
#include <unistd.h>

int my_strlen_up_to_char(char *str, char c)
{
    int result = 0;

    if (!str) {
        write(2, "str up to char NULL", 20);
        return (0);
    }
    while (str[result] && str[result] != c) {
        result++;
    }
    return (result);
}