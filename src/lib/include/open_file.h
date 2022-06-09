/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** open_file.h
*/
#ifndef OPEN_FILE_H_
    #define OPEN_FILE_H_
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

int open_file_and_read(char **buffer, char *filepath);

#endif