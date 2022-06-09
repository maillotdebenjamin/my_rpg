/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** press_keypad_bag.c
*/

#include "my_rpg.h"
#include "window_play.h"

int press_kp_inventory(info_game_t *info_)
{
    if (sfKeyboard_isKeyPressed(sfKeyI)) {
        info_->statu = inventory;
        return 1;
    }
    return 0;
}

int press_kp_close_inventory(info_game_t *info_)
{
    if (info_->statu == inventory && sfKeyboard_isKeyPressed(sfKeyI)) {
        if (info_->game.is_fight == YES) {
            info_->statu = fight;
        } else {
            info_->statu = game;
        }
        return 1;
    }
    return 0;
}