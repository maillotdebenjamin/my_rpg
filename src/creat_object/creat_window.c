/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_window.c
*/
#include "my_rpg.h"

window_t *create_window(int x, int y)
{
    window_t *my_window = malloc(sizeof(window_t));

    my_window->mode = (sfVideoMode){
        x, y, 32
    };
    sfRenderWindow *window =
    sfRenderWindow_create(my_window->mode, "ben", sfClose, NULL);
    my_window->window = window;
    return (my_window);
}