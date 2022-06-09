/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-antman-idriss.said
** File description:
** return_first_word.c
*/
#include "my_lib.h"

int len_word(char *str, char delimiter)
{
    int i = 0;

    if (str) {
        while (str[i] && str[i] != delimiter) {
            i++;
        }
    }
    return (i);
}

char *return_first_word(char *str, char delimiter)
{
    char *result = malloc(sizeof(char) * len_word(str, delimiter) + 1);
    int y = 0;

    for (int i = 0; str[i] && str[i] != delimiter; i++, y++) {
        result[y] = str[i];
    }
    result[y] = '\0';
    return (result);
}
