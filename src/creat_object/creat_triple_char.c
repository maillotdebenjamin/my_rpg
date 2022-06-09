/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_triple_char.c
*/
#include "my_rpg.h"
#include "open_file.h"
#include "my_lib.h"
#include "array.h"

char ***creat_triple_char(char *fileptah, int len)
{
    char ***tab = NULL;
    char **help = NULL;
    char *buffer = NULL;
    int res = 0;
    int i = 0;

    if ((res = open_file_and_read(&buffer, fileptah)) == -1) {
        return (NULL);
    }
    tab = malloc(sizeof(char **) * (len + 1));
    help = my_str_to_word_array(buffer, ":");
    for (; help && help[i]; i++) {
        tab[i] = my_str_to_word_array(help[i], "\n");
    }
    tab[i] = NULL;
    return (tab);
}