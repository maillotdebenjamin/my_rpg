/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** open_read.c
*/
#include "my_lib.h"
#include "open_file.h"

int open_read_whith_getline(char **buffer, char *filepath)
{
    FILE *fd = NULL;
    size_t n = 0;
    char *str = NULL;
    char *help = NULL;

    if (!filepath) {
        return (-1);
    }
    if ((fd = fopen(filepath, "r")) == NULL) {
        return (-1);
    }
    while (getline(&str, &n, fd) != -1) {
        help = (*buffer);
        (*buffer) = my_strcat((*buffer), str);
        free(help);
    }
    return (0);
}
