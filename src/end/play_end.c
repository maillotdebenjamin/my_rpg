/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** play_end.c
*/
#include "my_rpg.h"

void display_end(info_game_t *info_, background_t *back)
{
    display_backround(info_, back);
    sfRenderWindow_display(info_->my_window->window);
}

void event_end(info_game_t *info_)
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

void play_end(info_game_t *info_)
{
    sprite_t *sprite = create_sprite("image/image_end.png", V2F(0, 0),
    RECT_I(0, 0, LEN_WINDOW_X, LEN_WINDOW_Y),
    creat_type_sprite(type_background, sfTrue));
    background_t *back = create_bacground(sprite);
    sfView *view = NULL;
    text_t text = creat_text("src/arial.ttf", V2F(0, 0), 100, sfRed);
    sfText_setString(text.text, "PRESS 'Q' FOR QUIT\n");

    info_->statu = end;
    view = sfView_create();
    sfView_setSize(view, V2F(LEN_WINDOW_X, 769));
    sfView_reset(view, RECT_F(0, 0, LEN_WINDOW_X, 769));
    sfRenderWindow_setView(info_->my_window->window, view);
    while (info_->statu == end) {
        event_end(info_);
        display_end(info_, back);
    }
}