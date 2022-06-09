/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** return_first_word_static.c
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *my_strcpy_up_to_char(char *scr, char *dest, char limite)
{
    int i = 0;

    if (!dest || !scr) {
        return ("");
    }
    while (scr[i] != '\0' && scr[i] != limite) {
        dest[i] = scr[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *return_first_word_static(char *str, char *copy, char delimiter)
{
    my_strcpy_up_to_char(str, copy, delimiter);
    return copy;
}