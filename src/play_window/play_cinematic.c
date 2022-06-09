/*
** EPITECH PROJECT, 2022
** My_Rpg
** File description:
** play_cinematic
*/

#include "my_rpg.h"

int cine_is_finish(info_game_t *info_)
{
    if (info_->cine.ship->position.x + info_->cine.ship->len.x >= 0 &&
    info_->cine.ship->position.y <= LEN_WINDOW_Y) {
        return (1);
    }
    info_->statu = game;
    return (0);
}

void display_cine(info_game_t *info_)
{
    display_backround(info_, info_->cine.sprite_back);
    display_one_sprite(info_, info_->cine.ship);
    info_->cine.ship->position =
    V2F(info_->cine.ship->position.x - 2, info_->cine.ship->position.y + 1);
    wait_one_sec(info_, 10000);
    sfSprite_setPosition(info_->cine.ship->sprite, info_->cine.ship->position);
    sfRenderWindow_display(info_->my_window->window);
}

void event_cine(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        if (info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
    }
}

int play_cine(info_game_t *info_)
{
    while (info_->statu == cine && cine_is_finish(info_)) {
        event_cine(info_);
        display_cine(info_);
    }
    return (0);
}