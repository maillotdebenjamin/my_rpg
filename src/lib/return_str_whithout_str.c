/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** return_str_whithout_str.c
*/
#include <stdio.h>
#include <stdlib.h>

int is_not_in_str(char c, char const *separation)
{
    int i = 0;

    if (!separation || !c) {
        return (0);
    }
    for (; separation[i]; i++) {
        if (separation[i] == c) {
            return (1);
        }
    }
    return (0);
}

int my_strlen_clean_str(char *str, char *c_to_sup)
{
    int i = 0;
    int result = 0;

    if (!str || !c_to_sup) {
        return (0);
    }
    for (; str[i]; i++) {
        if (is_not_in_str(str[i], c_to_sup) == 0) {
            result += 1;
        } else if (is_not_in_str(str[i], c_to_sup) == 1 &&
        is_not_in_str(str[i + 1], c_to_sup) == 0) {
            result += 1;
        }
    }
    return (result);
}

void complete_with_good_char(
char *str, char *c_to_sup, char *(*copy), char separate_diff_word)
{
    int i = 0;
    int y = 0;

    for (; str[i]; i++) {
        if (!is_not_in_str(str[i], c_to_sup)) {
            (*copy)[y] = str[i];
            y++;
        } else if (is_not_in_str(str[i], c_to_sup) == 1 &&
        is_not_in_str(str[i + 1], c_to_sup) == 0) {
            (*copy)[y] = separate_diff_word;
            y++;
        }
    }
    (*copy)[y] = '\0';
    if (y - 1 >= 0 && is_not_in_str((*copy)[y - 1], c_to_sup)) {
        (*copy)[y - 1] = '\0';
    }
}

char *return_str_but_whithout_str(
char *str, char *c_to_sup, char separate_diff_word)
{
    char *copy = malloc(sizeof(char) * my_strlen_clean_str(str, c_to_sup) + 1);

    if (!str || !c_to_sup) {
        return (str);
    }
    complete_with_good_char(str, c_to_sup, &copy, separate_diff_word);
    return (copy);
}
