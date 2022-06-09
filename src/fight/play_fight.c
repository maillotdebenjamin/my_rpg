/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** play_fight.c
*/

#include "my_rpg.h"
#include "window_fight.h"

void play_window_fight(info_game_t *info_)
{
    while (info_->statu == fight) {
        event_fight(info_);
        display_fight(info_);
        if (info_->fight.life_mob <= 0) {
            info_->game.is_fight = NO;
            info_->statu = game;
            info_->game.choice_pnj->my_sprite->type.open = sfFalse;
        }
        if (info_->fight.life_player1 <= 0) {
            info_->statu = quit;
        }
    }
}

int play_fight(info_game_t *info_)
{
    sfView *view = NULL;

    if (info_->statu == fight) {
        view = sfView_create();
        sfView_setSize(view, V2F(LEN_WINDOW_X, LEN_WINDOW_Y));
        sfView_reset(view, RECT_F(0, 0, 1200, 800));
        sfSprite_setScale(
        info_->fight.players[3]->my_sprite->sprite, V2F(1, 1));
        sfSprite_setPosition(info_->fight.players[3]->my_sprite->sprite,
        info_->fight.players[3]->my_sprite->position);
        sfRenderWindow_setView(info_->my_window->window, view);
        play_window_fight(info_);
    }
    return 0;
}