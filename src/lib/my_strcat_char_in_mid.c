/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strcat_char_in_mid.c
*/
#include "my_lib.h"

char *my_strcat_char_in_mid(char *dest, char *src, char c)
{
    char *str =
    malloc(sizeof(char) * ((my_strlen(dest) + 1) + my_strlen(src) + 1));
    int i = 0;
    int y = 0;

    if (!src || !dest) {
        write(2, "Error in my_str_cat_up_to_char", 30);
        return ("");
    }
    for (; dest[y] != '\0'; y = y + 1) {
        str[y] = dest[y];
    }
    str[y++] = c;
    for (; src[i] != '\0'; i = i + 1, y = y + 1) {
        str[y] = src[i];
    }
    str[y] = '\0';
    return (str);
}