/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** go_to_game_and_choice_perso.c
*/
#include "my_rpg.h"

void go_to_game_and_choice_perso(info_game_t *info_)
{
    for (int i = 0; info_->choice_perso.button[i]; i++) {
        if (info_->choice_perso.button[i]->statu == click ||
        info_->choice_perso.button[i]->statu == hover) {
            info_->game.perso->my_sprite = info_->game.tab_sprite[i];
            info_->choice_perso.button[i]->statu = not;
        }
    }
    info_->statu = cine;
}