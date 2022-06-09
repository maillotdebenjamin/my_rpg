/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** array.h
*/
#ifndef ARRAY_H_
    #define ARRAY_H_
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

int my_array_char_len(char **array);
int copy_array_char(char **array, char ***dest);
void print_array_char(int fd, char **array, int break_);
void verify_array_char(int fd, char **array, char c_first, char c_end);

#endif