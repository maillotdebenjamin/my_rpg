/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** play_menu.c
*/
#include "my_rpg.h"

void action_planet(info_game_t *info_)
{
    for (int i = 0; info_->menu.element[i]; i++) {
        if (info_->menu.element[i]->my_sprite->type.name == type_planet &&
        have_good_time(info_, info_->menu.element[i], 1000000)) {
            sfSprite_rotate(info_->menu.element[i]->my_sprite->sprite, 1);
        }
    }
}

void display_menu(info_game_t *info_)
{
    action_planet(info_);
    display_backround(info_, info_->menu.background);
    display_tab_button(info_, info_->menu.button);
    display_tab_obj(info_, info_->menu.element);
    sfRenderWindow_display(info_->my_window->window);
}

void is_in_menu_button(info_game_t *info_)
{
    for (int i = 0; info_->menu.button[i]; i++) {
        is_in_button(info_, info_->menu.button[i]);
    }
}

void event_menu(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        is_in_menu_button(info_);
        if (info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
    }
}

int play_menu(info_game_t *info_)
{
    while (info_->statu == menu) {
        event_menu(info_);
        display_menu(info_);
    }
    return (0);
}