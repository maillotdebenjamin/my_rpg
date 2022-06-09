/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** move_rect_pnj.c
*/
#include "my_rpg.h"

int move_one_rect_pnj(info_game_t *info_, int i)
{
    if (!info_->game.pnj[i]->rect_move) {
        return (1);
    }
    if (pnj_have_good_time(info_, &info_->game.pnj[i], 500000.0)) {
        info_->game.pnj[i]->index_rect += 1;
        if (info_->game.pnj[i]->index_rect > 3) {
            info_->game.pnj[i]->index_rect = 0;
        }
    }
    sfSprite_setTextureRect(info_->game.pnj[i]->my_sprite->sprite,
    info_->game.pnj[i]->rect_move[info_->game.pnj[i]->index_move_rect]
    [info_->game.pnj[i]->index_rect]);
    return (0);
}

int move_rect_pnj(info_game_t *info_)
{
    for (int i = 0; info_->game.pnj[i]; i++) {
        move_one_rect_pnj(info_, i);
    }
    return (0);
}