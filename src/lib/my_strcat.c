/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
**  concatenates two strings
*/
#include "my_lib.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    char *str = NULL;
    int i = 0;
    int y = 0;

    if (!src || (str = malloc(sizeof(char) *
    (my_strlen(dest) + my_strlen(src) + 1))) == NULL) {
        return (NULL);
    }
    while (dest && dest[y] != '\0') {
        str[y] = dest[y];
        y = y + 1;
    }
    while (src[i] != '\0') {
        str[y] = src[i];
        i = i + 1;
        y = y + 1;
    }
    str[y] = '\0';
    return (str);
}
