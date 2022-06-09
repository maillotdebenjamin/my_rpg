/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strncmp.c
*/
#include "my_lib.h"

int my_str_char_cmp(
char *str, char *first_word_str, char *limite_str, char *limite_first_word)
{
    int i = 0;

    if (!str || !first_word_str) {
        return (1);
    }
    while (str[i] && first_word_str[i] && !my_is_in_str(str[i], limite_str) &&
    !my_is_in_str(first_word_str[i], limite_first_word)) {
        if (str[i] != first_word_str[i]) {
            return (1);
        }
        i++;
    }
    return ((!str[i] || my_is_in_str(str[i], limite_str) == 1) &&
    (my_is_in_str(first_word_str[i], limite_first_word) == 1 ||
    !first_word_str[i])) ? (0) : (1);
}
