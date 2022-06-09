/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** play_inventory.c
*/

#include "my_rpg.h"
#include "window_inventory.h"
#include "window_menu.h"
#include "window_play.h"

void event_inventory(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        put_description(info_, info_->inventory.description);
        increase_life(info_);
        if (!press_kp_close_inventory(info_) &&
        info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
    }
}

int play_inventory(info_game_t *info_)
{
    sfView *view_inventory = NULL;

    if (info_->statu == inventory) {
        view_inventory = sfView_create();
        sfView_setSize(view_inventory, V2F(LEN_WINDOW_X, LEN_WINDOW_Y));
        sfView_reset(view_inventory, RECT_F(0, 0, 1200, 800));
        sfRenderWindow_setView(info_->my_window->window, view_inventory);
        while (info_->statu == inventory) {
            event_inventory(info_);
            display_inventory(info_);
        }
    }
    return (0);
}