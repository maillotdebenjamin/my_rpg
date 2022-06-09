/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_info_game.c
*/
#include "my_rpg.h"
#include "window_menu.h"
#include "window_play.h"
#include "window_inventory.h"
#include "window_fight.h"

info_game_t *init_info(void)
{
    info_game_t *info_ = malloc(sizeof(info_game_t));

    info_->my_window = create_window(LEN_WINDOW_X, LEN_WINDOW_Y);
    info_->music = NULL;
    info_->statu = menu;
    info_->game = init_game();
    info_->menu = init_menu();
    info_->fight = init_fight();
    info_->inventory = init_inventory();
    info_->choice_perso = init_choice_perso();
    info_->cine = init_cine();
    info_->is_in_something = sfFalse;
    info_->my_clock = create_clock();
    info_->mouse = V2I(0, 0);
    info_->states = creat_stat("image/quad_image.png");
    init_map(info_, &info_->game);
    info_->game.view = creat_view(info_);
    return (info_);
}
