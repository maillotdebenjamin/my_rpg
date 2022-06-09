/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** get_val_to_perso.c
*/
#include "my_rpg.h"

void put_life_in_inventory(info_game_t *info_)
{
    info_->inventory.potion_life += 1;
    info_->game.choice_pnj->my_sprite->type.open = sfFalse;
}

void put_apple_in_inventory(info_game_t *info_)
{
    info_->inventory.apple += 1;
    info_->game.choice_pnj->my_sprite->type.open = sfFalse;
}

void put_tea_in_inventory(info_game_t *info_)
{
    info_->inventory.tea += 1;
    info_->game.choice_pnj->my_sprite->type.open = sfFalse;
}