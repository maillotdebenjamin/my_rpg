/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** play_mini_map.c
*/
#include "my_rpg.h"

void display_mini_map(info_game_t *info_, sfText *text)
{
    sfRenderWindow_clear(info_->my_window->window, sfBlack);
    sfRenderWindow_drawVertexArray(
    info_->my_window->window, info_->game.tab_flor, &(info_->states));
    sfRenderWindow_drawVertexArray(
    info_->my_window->window, info_->game.tab_hauteur_2, &(info_->states));
    display_player(info_, info_->game.perso);
    display_tab_pnj(info_, info_->game.pnj);
    sfRenderWindow_drawVertexArray(
    info_->my_window->window, info_->game.tab_hauteur, &(info_->states));
    display_one_sprite(info_, info_->game.perso->obj_player);
    display_the_talk(info_);
    sfRenderWindow_drawText(info_->my_window->window, text, NULL);
    sfRenderWindow_display(info_->my_window->window);
}

void event_mini_map(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        if (info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
        if (sfKeyboard_isKeyPressed(sfKeyQ)) {
            info_->statu = game;
        }
    }
}

void play_mini_map(info_game_t *info_)
{
    sfView *view_inventory = NULL;
    text_t text = creat_text("src/arial.ttf", V2F(0, 0), 100, sfRed);
    sfText_setString(text.text, "PRESS 'Q' FOR QUIT\n");

    info_->statu = mini_map;
    view_inventory = sfView_create();
    sfView_setSize(view_inventory, V2F(LEN_WINDOW_X, 1200));
    sfView_reset(view_inventory, RECT_F(0, 0, LEN_WINDOW_X, 1200));
    sfRenderWindow_setView(info_->my_window->window, view_inventory);
    while (info_->statu == mini_map) {
        event_mini_map(info_);
        display_mini_map(info_, text.text);
    }
}