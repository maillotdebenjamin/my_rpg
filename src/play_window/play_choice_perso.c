/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** play_choice_perso.c
*/
#include "my_rpg.h"

void display_choice_perso(info_game_t *info_)
{
    sfRenderWindow_clear(info_->my_window->window, sfBlack);
    display_backround(info_, info_->menu.background);
    display_tab_button(info_, info_->choice_perso.button);
    sfRenderWindow_display(info_->my_window->window);
}

void is_in_choice_perso_button(info_game_t *info_)
{
    for (int i = 0; info_->choice_perso.button[i]; i++) {
        is_in_button(info_, info_->choice_perso.button[i]);
    }
}

void event_choice_perso(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        is_in_choice_perso_button(info_);
        if (info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
    }
}

int play_choice_perso(info_game_t *info_)
{
    while (info_->statu == choice_perso) {
        event_choice_perso(info_);
        display_choice_perso(info_);
    }
    return (0);
}