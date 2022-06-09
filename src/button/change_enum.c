/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** change_enum.c
*/
#include "my_rpg.h"

void go_to_menu(info_game_t *info_)
{
    info_->statu = menu;
}

void go_to_choice_perso(info_game_t *info_)
{
    info_->statu = choice_perso;
}

void go_to_game(info_game_t *info_)
{
    info_->statu = game;
}

void go_to_quit(info_game_t *info_)
{
    info_->statu = quit;
}