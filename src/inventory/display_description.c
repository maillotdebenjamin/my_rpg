/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** display_description.c
*/

#include "my_rpg.h"
#include "window_inventory.h"
#include "window_menu.h"
#include "window_play.h"

int mouse_is_in_sprite_description(info_game_t *info_, sprite_t *sprite)
{
    if (sprite->type.open == sfTrue && info_->mouse.x > sprite->position.x &&
    info_->mouse.x < sprite->position.x + sprite->len.x / 4 &&
    info_->mouse.y > sprite->position.y &&
    info_->mouse.y < sprite->position.y + sprite->len.y) {
        return (1);
    }
    return (0);
}

void put_description(info_game_t *info_, obj_t **description)
{
    (void)description;
    if (!info_->inventory.description) {
        return;
    }
    for (int i = 0; info_->inventory.description[i]; i++) {
        if (mouse_is_in_sprite_description(
            info_, info_->inventory.items[i]->my_sprite)) {
            sfSprite_setTextureRect(
            info_->inventory.description[i]->my_sprite->sprite,
            info_->inventory.description[i]->my_sprite->rect);
        } else {
            info_->is_in_something = sfTrue;
            sfSprite_setTextureRect(
            info_->inventory.description[i]->my_sprite->sprite,
            RECT_I(0, 0, 0, 0));
        }
    }
}