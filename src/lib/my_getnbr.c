/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** get string nbr
*/
#include "my_lib.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = 0;
    int i = 0;

    if (!str)
        return (0);
    if (*str == '-') {
        neg = 1;
        str++;
    }
    for (; str[i] && str[i] >= '0' && str[i] <= '9'; i++) {
        nb = nb * 10.0 + (str[i] - 48);
    }
    if (neg) {
        nb *= -1;
    }
    return (nb);
}
