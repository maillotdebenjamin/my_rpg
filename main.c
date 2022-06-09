/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main.c
*/
#include "my_rpg.h"

int main(void)
{
    info_game_t *info_ = init_info();
    my_rpg(info_);
    free_struct(info_);
    return (0);
}
