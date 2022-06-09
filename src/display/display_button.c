/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** display_button.c
*/
#include "my_rpg.h"

void display_one_button(info_game_t *info_, button_t *button)
{
    if (!button) {
        return;
    }
    if (button->my_sprite->type.open == sfTrue &&
    button->my_sprite->position.x > 0) {
        sfRenderWindow_drawSprite(
        info_->my_window->window, button->my_sprite->sprite, NULL);
    }
}