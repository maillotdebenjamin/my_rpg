/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** press_keypad.c
*/
#include "my_rpg.h"
#include "window_play.h"

int press_keypad(info_game_t *info_)
{
    if (info_->game.talk == NO) {
        if (sfKeyboard_isKeyPressed(sfKeyUp)) {
            move_perso(info_, V2F(0, -5), 3, up);
            return (5);
        }
        if (sfKeyboard_isKeyPressed(sfKeyDown)) {
            move_perso(info_, V2F(0, 5), 0, down);
            return (5);
        }
        if (sfKeyboard_isKeyPressed(sfKeyRight)) {
            move_perso(info_, V2F(5, 0), 2, right);
            return (5);
        }
        if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
            move_perso(info_, V2F(-5, 0), 1, left);
            return (1);
        }
    }
    return (0);
}