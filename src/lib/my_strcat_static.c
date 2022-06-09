/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
**  concatenates two strings
*/
#include "my_lib.h"

char *my_strcat_static(char *dest, char const *src)
{
    int i = 0;
    int y = 0;

    while (dest[y] != '\0') {
        y = y + 1;
    }
    while (src[i] != '\0') {
        dest[y] = src[i];
        i = i + 1;
        y = y + 1;
    }
    dest[y] = '\0';
    return (dest);
}
