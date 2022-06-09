/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** nb_change_to_str.c
*/
#include "my_lib.h"

int nbr_len_for_str(int nombre)
{
    int r = 1;
    int result = 1;

    while (nombre / r >= 10) {
        r = r * 10;
        result = result + 1;
    }
    return (result);
}

char *nb_change_to_str(int nb)
{
    int len = nbr_len_for_str(nb);
    char *str = malloc(sizeof(char) * nbr_len_for_str(nb) + 1);

    str[len] = '\0';
    len -= 1;
    for (; len >= 0; len -= 1) {
        str[len] = (nb % 10) + 48;
        nb = nb / 10;
    }
    return (str);
}
