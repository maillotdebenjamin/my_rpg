/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_copy_array.c
*/
#include "my_lib.h"
#include "array.h"

int copy_array_char(char **array, char ***dest)
{
    (*dest) = malloc(sizeof(char *) * (my_array_char_len(array) + 1));
    int i = 0;

    if (!array || (*dest) == NULL) {
        return (-1);
    }
    for (; array[i]; i++) {
        (*dest)[i] = my_strdup(array[i]);
    }
    return (0);
}
