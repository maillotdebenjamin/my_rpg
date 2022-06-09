/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** begin_fight.c
*/
#include "my_rpg.h"
#include "my_lib.h"

void begin_fight_mob_one(info_game_t *info_)
{
    info_->statu = fight;
    info_->game.is_fight = YES;
    info_->fight.anim_vs = not_done;
    info_->fight.mob_index = 2;
    info_->game.level.score += 1;
    sfText_setString(info_->game.level.text,
    my_strcat("LEVEL: ", nb_change_to_str(info_->game.level.score)));
    info_->fight.map_index = 2;
    info_->fight.life_mob = 5;
}

void begin_fight_mob_two(info_game_t *info_)
{
    info_->statu = fight;
    info_->game.is_fight = YES;
    info_->fight.anim_vs = not_done;
    info_->fight.mob_index = 5;
    info_->fight.life_mob = 5;
    info_->game.level.score += 1;
    info_->fight.map_index = 1;
    sfText_setString(info_->game.level.text,
    my_strcat("LEVEL: ", nb_change_to_str(info_->game.level.score)));
}

void begin_fight_mob_three(info_game_t *info_)
{
    info_->statu = fight;
    info_->game.is_fight = YES;
    info_->fight.anim_vs = not_done;
    info_->fight.mob_index = 6;
    info_->fight.life_mob = 5;
    info_->game.level.score += 1;
    info_->fight.map_index = 0;
    sfText_setString(info_->game.level.text,
    my_strcat("LEVEL: ", nb_change_to_str(info_->game.level.score)));
}

void begin_fight_mob_four(info_game_t *info_)
{
    info_->statu = fight;
    info_->game.is_fight = YES;
    info_->fight.anim_vs = not_done;
    info_->fight.mob_index = 7;
    info_->fight.life_mob = 5;
    info_->game.level.score += 1;
    info_->fight.map_index = 1;
    sfText_setString(info_->game.level.text,
    my_strcat("LEVEL: ", nb_change_to_str(info_->game.level.score)));
}