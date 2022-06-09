/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-pushswap-benjamin.maillot
** File description:
** my_is_in_str.c
*/
#include <unistd.h>

int my_is_in_str(char c, char const *str)
{
    if (!str) {
        return (0);
    }
    for (int i = 0; str[i]; i++) {
        if (str[i] == c) {
            return (1);
        }
    }
    return (0);
}