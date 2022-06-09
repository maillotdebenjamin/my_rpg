/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** str compared return 1 if S1 bigger
*/
#include "my_lib.h"

int return_bigger_str(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] == s2[j]) {
            i = i + 1;
            j = j + 1;
            continue;
        }
        return (s1[i] > s2[j]) ? (1) : (2);
    }
    return (0);
}
