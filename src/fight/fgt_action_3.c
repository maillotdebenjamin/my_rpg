/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** fgt_action_3.c
*/
#include "my_rpg.h"
#include "window_fight.h"

void fgt_action_3_mob(info_game_t *info_)
{
    if (info_->fight.life_mob <= 0) {
        return;
    }
    int i = 0;
    for (; i != 1 ||
    info_->fight.players[info_->fight.mob_index]->my_sprite->position.x <
    1000;) {
        animation_attack_mob(
        info_, info_->fight.players[info_->fight.mob_index], &i);
        display_fight(info_);
    }
}

void fgt_action_3(info_game_t *info_)
{
    if (info_->inventory.munitions <= 0)
        return;
    info_->inventory.munitions -= 1;
    info_->fight.life_mob -= info_->fight.dam_player1 + 1;
    for (;
    info_->fight.players[1]->tab[info_->fight.players[1]->index].height !=
    -1;) {
        animation_shoot(info_, info_->fight.players[1]);
        info_->fight.statu_mob = shooted;
        display_fight(info_);
    }
    info_->fight.players[1]->index = 0;
    sfSprite_setTextureRect(info_->fight.players[1]->my_sprite->sprite,
    info_->fight.players[1]->tab[info_->fight.players[1]->index]);
    fgt_action_3_mob(info_);
    return;
}