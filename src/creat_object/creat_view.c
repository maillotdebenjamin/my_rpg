/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_view.c
*/
#include "my_rpg.h"

sfView *creat_view(info_game_t *info_)
{
    sfView *view = sfView_create();
    sfView_setCenter(view,
    V2F(info_->game.perso->my_sprite->position.x +
    info_->game.perso->my_sprite->len.x / 2,
    info_->game.perso->my_sprite->position.y +
    info_->game.perso->my_sprite->len.y / 2));
    sfView_setSize(view, V2F(LEN_WINDOW_X / 2, LEN_WINDOW_Y / 2));
    return (view);
}