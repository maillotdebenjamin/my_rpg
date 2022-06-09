/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** display_inventory.c
*/

#include "my_rpg.h"
#include "window_inventory.h"
#include "window_menu.h"
#include "window_play.h"

void display_inventory(info_game_t *info_)
{
    sfSprite_setTextureRect(info_->inventory.items[0]->my_sprite->sprite,
    info_->inventory.items[0]->tab[info_->inventory.munitions]);
    sfSprite_setTextureRect(info_->inventory.items[1]->my_sprite->sprite,
    info_->inventory.items[1]->tab[info_->inventory.potion_life]);
    sfSprite_setTextureRect(info_->inventory.items[2]->my_sprite->sprite,
    info_->inventory.items[2]->tab[info_->inventory.apple]);
    sfSprite_setTextureRect(info_->inventory.items[3]->my_sprite->sprite,
    info_->inventory.items[3]->tab[info_->inventory.tea]);
    sfSprite_setTextureRect(info_->inventory.items[4]->my_sprite->sprite,
    info_->inventory.items[4]->tab[info_->inventory.piece]);
    display_backround(info_, info_->inventory.background);
    display_tab_obj(info_, info_->inventory.items);
    display_tab_obj(info_, info_->inventory.description);
    sfRenderWindow_display(info_->my_window->window);
}