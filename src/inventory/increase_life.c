/*
** EPITECH PROJECT, 2021
** test_rpg
** File description:
** increase_life.c
*/

#include "my_rpg.h"
#include "window_inventory.h"
#include "window_menu.h"
#include "window_play.h"

int mouse_is_in_sprite_inv(info_game_t *info_, sprite_t *sprite)
{
    if (sprite->type.open == sfTrue && info_->mouse.x > sprite->position.x &&
    info_->mouse.x < sprite->position.x + sprite->len.x / 4 &&
    info_->mouse.y > sprite->position.y &&
    info_->mouse.y < sprite->position.y + sprite->len.y) {
        return (1);
    }
    return (0);
}

void increase_life_number(info_game_t *info_, int n)
{
    int i = info_->fight.life_player1;

    while (i < 5 && n > 0) {
        info_->fight.life_player1 += 1;
        n -= 1;
        i += 1;
    }
}

void increase_with_tea(info_game_t *info_)
{
    if (mouse_is_in_sprite_inv(info_, info_->inventory.items[3]->my_sprite) &&
    info_->inventory.tea > 0) {
        info_->inventory.tea -= 1;
        increase_life_number(info_, 1);
        return;
    }
}

void increase_life(info_game_t *info_)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (mouse_is_in_sprite_inv(
            info_, info_->inventory.items[1]->my_sprite) &&
        info_->inventory.potion_life > 0) {
            info_->inventory.potion_life -= 1;
            increase_life_number(info_, 5);
            return;
        }
        if (mouse_is_in_sprite_inv(
            info_, info_->inventory.items[2]->my_sprite) &&
        info_->inventory.apple > 0) {
            info_->inventory.apple -= 1;
            increase_life_number(info_, 3);
            return;
        }
        increase_with_tea(info_);
    }
}
