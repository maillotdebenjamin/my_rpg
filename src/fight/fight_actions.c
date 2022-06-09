/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** fight_actions.c
*/

#include "my_rpg.h"
#include "window_fight.h"

void fgt_action_1(info_game_t *info_)
{
    int i = 0;
    for (; i != 1 || info_->fight.players[1]->my_sprite->position.x > 100;) {
        animation_attack(info_, info_->fight.players[1], &i);
        display_fight(info_);
    }
    if (info_->fight.life_mob <= 0) {
        return;
    }
    i = 0;
    for (; i != 1 ||
    info_->fight.players[info_->fight.mob_index]->my_sprite->position.x <
    1000;) {
        animation_attack_mob(
        info_, info_->fight.players[info_->fight.mob_index], &i);
        display_fight(info_);
    }
    return;
}

void fgt_action_2(info_game_t *info_)
{
    int i = 0;
    for (; i != 1 ||
    info_->fight.players[info_->fight.mob_index]->my_sprite->position.x <
    1000;) {
        animation_attack_mob_missed(
        info_, info_->fight.players[info_->fight.mob_index], &i);
        display_fight(info_);
    }
    return;
}

void fgt_action_4(info_game_t *info_)
{
    info_->statu = inventory;
    return;
}

void settings_fight(info_game_t *info_)
{
    info_->statu = game;
    info_->game.is_fight = NO;
    return;
}