/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** free_struct.c
*/
#include "my_rpg.h"

void free_window(info_game_t *info_)
{
    sfRenderWindow_destroy(info_->my_window->window);
    free(info_->my_window);
}

void free_struct(info_game_t * info_)
{
    free_window(info_);
}