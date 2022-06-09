/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** task01 strcp
*/
#include <string.h>
#include <stdio.h>

char *my_strcpy(char *dest, char const *scr)
{
    int i = 0;

    if (!dest || !scr) {
        return ("");
    }
    while (scr[i] != '\0') {
        dest[i] = scr[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}