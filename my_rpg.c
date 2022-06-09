/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_rpg.c
*/
#include "my_rpg.h"
#include "window_play.h"
#include "window_inventory.h"
#include "window_fight.h"

void other_window(info_game_t *info_)
{
    if (info_->statu == choice_perso)
        play_choice_perso(info_);
    if (info_->statu == help)
        play_help(info_);
    if (info_->statu == inventory)
        play_inventory(info_);
    if (info_->statu == fight)
        play_fight(info_);
    if (info_->statu == cine)
        play_cine(info_);
}

int my_rpg(info_game_t *info_)
{
    sfMusic *intro = sfMusic_createFromFile("sound/intro-theme.ogg");
    while (info_->statu != quit) {
        if (info_->statu == menu) {
            sfMusic_play(intro);
            play_menu(info_);
        }
        other_window(info_);
        if (info_->statu == game) {
            sfMusic_stop(intro);
            play_game(info_);
        }
    }
    sfRenderWindow_close(info_->my_window->window);
    return (0);
}