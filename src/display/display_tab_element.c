/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ethan.guilloux
** File description:
** display_tab_element.c
*/
#include "my_rpg.h"

void display_tab_button(info_game_t *info_, button_t **tab)
{
    if (!tab) {
        return;
    }
    for (int i = 0; tab[i]; i++) {
        if (tab[i]->my_sprite->type.open == sfTrue &&
        tab[i]->my_sprite->position.x < LEN_WINDOW_X &&
        tab[i]->my_sprite->position.x > 0 &&
        tab[i]->my_sprite->position.y < LEN_WINDOW_Y) {
            sfRenderWindow_drawSprite(
            info_->my_window->window, tab[i]->my_sprite->sprite, NULL);
        }
    }
}

void display_tab_obj(info_game_t *info_, obj_t **tab)
{
    if (!tab) {
        return;
    }
    for (int i = 0; tab[i]; i++) {
        if (tab[i]->my_sprite->type.open == sfTrue &&
        tab[i]->my_sprite->position.x > 0) {
            sfRenderWindow_drawSprite(
            info_->my_window->window, tab[i]->my_sprite->sprite, NULL);
        }
        if (tab[i]->my_sprite->type.name == type_obj_static) {
            change_gravity_ship_menu(info_, tab[i]);
        }
        if (tab[i]->my_sprite->type.name == type_obj &&
        have_good_time(info_, tab[i], 10000000.0)) {
            change_rect_obj(info_, tab[i]);
        }
    }
}

void display_tab_sprite(info_game_t *info_, sprite_t **tab)
{
    if (!tab) {
        return;
    }
    for (int i = 0; tab[i]; i++) {
        if (tab[i]->type.open == sfTrue && tab[i]->position.x < LEN_WINDOW_X &&
        tab[i]->position.x > 0 && tab[i]->position.y < LEN_WINDOW_Y) {
            sfRenderWindow_drawSprite(
            info_->my_window->window, tab[i]->sprite, NULL);
        }
    }
}

void display_tab_pnj(info_game_t *info_, pnj_t **tab)
{
    if (!tab) {
        return;
    }
    for (int i = 0; tab[i]; i++) {
        if (tab[i]->my_sprite->type.open == sfTrue &&
        tab[i]->my_sprite->position.x > 0 &&
        tab[i]->my_sprite->position.y > 0) {
            sfRenderWindow_drawSprite(
            info_->my_window->window, tab[i]->my_sprite->sprite, NULL);
        }
    }
}
