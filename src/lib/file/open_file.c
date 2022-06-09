/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** open_file.c
*/
#include "open_file.h"

int open_file_and_read(char **buffer, char *filepath)
{
    int fd = 0;
    struct stat statbuf;

    if (!filepath || access(filepath, R_OK) == -1 ||
    stat(filepath, &statbuf) == -1) {
        return (-1);
    }
    if ((fd = open(filepath, O_RDONLY)) == -1) {
        return (-1);
    }
    (*buffer) = malloc(sizeof(char) * (statbuf.st_size + 1));
    if ((*buffer) == NULL || read(fd, *buffer, statbuf.st_size) == -1) {
        return (-1);
    }
    (*buffer)[statbuf.st_size] = '\0';
    return (0);
}
