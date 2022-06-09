/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** play_help.c
*/
#include "my_rpg.h"

void display_help(info_game_t *info_)
{
    display_backround(info_, info_->game.help);
    sfRenderWindow_display(info_->my_window->window);
}

void event_help(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        if (info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
        if (sfKeyboard_isKeyPressed(sfKeyH)) {
            info_->statu = game;
        }
    }
}

int play_help(info_game_t *info_)
{
    sfView *view_inventory = NULL;

    if (info_->statu == help) {
        view_inventory = sfView_create();
        sfView_setSize(view_inventory, V2F(LEN_WINDOW_X, LEN_WINDOW_Y));
        sfView_reset(view_inventory, RECT_F(0, 0, 1200, 800));
        sfRenderWindow_setView(info_->my_window->window, view_inventory);
        sfRenderWindow_setFramerateLimit(info_->my_window->window, 60);
        while (info_->statu == help) {
            event_help(info_);
            display_help(info_);
        }
    }
    return (0);
}
