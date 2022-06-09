/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** event_fight.c
*/

#include "my_rpg.h"
#include "window_menu.h"
#include "window_play.h"
#include "window_fight.h"

void go_to_fight(info_game_t *info_)
{
    info_->statu = fight;
}

void is_in_fight_button(info_game_t *info_)
{
    for (int i = 0; info_->fight.buttons[i]; i++) {
        is_in_button(info_, info_->fight.buttons[i]);
    }
}

void event_fight(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        is_in_fight_button(info_);
        if (info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
    }
}