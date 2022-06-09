/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** print_array.c
*/
#include "my_lib.h"

void print_array_char(int fd, char **array, int break_)
{
    if (!array) {
        return;
    }
    for (int i = 0; array[i]; i++) {
        write(fd, array[i], my_strlen(array[i]) - 1);
        if (break_) {
            write(fd, "\n", 1);
        }
    }
}

void verify_array_char(int fd, char **array, char c_first, char c_end)
{
    if (!array) {
        return;
    }
    for (int i = 0; array[i]; i++) {
        write(fd, &c_first, 1);
        write(fd, array[i], my_strlen(array[i]) - 1);
        write(fd, &c_end, 1);
    }
}
