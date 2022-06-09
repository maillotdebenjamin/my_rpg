/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** can_interact.c
*/
#include "my_rpg.h"
#include "window_play.h"

int can_interact(info_game_t *info_)
{
    for (int i = 0; info_->game.pnj[i]; i++) {
        if (info_->game.pnj[i]->my_sprite->type.open == sfTrue &&
        sprite_is_next_to_sprite(info_, info_->game.pnj[i]->my_sprite,
        info_->game.perso->my_sprite, 75)) {
            info_->game.perso->obj_player->type.open = sfTrue;
            info_->game.pnj[i]->my_sprite->type.name = type_next_to_perso;
            info_->game.choice_pnj = info_->game.pnj[i];
            info_->game.perso->text.index_y = i;
            return (1);
        }
    }
    info_->game.perso->obj_player->type.open = sfFalse;
    return (0);
}