/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** move_perso.c
*/
#include "my_rpg.h"
#include "window_play.h"

int already_in_good_direction(
info_game_t *info_, sfVector2f vector_add, statu_move_e statue)
{
    if (PERSO->move.statu == statue) {
        if (perso_have_good_time(info_, &PERSO, 100000.0)) {
            PERSO->index_rect += 1;
            (PERSO->index_rect > 3) ?
            (PERSO->index_rect = 0) : (0);
        }
        sfSprite_setTextureRect(PERSO->my_sprite->sprite,
        PERSO->rect_move[PERSO->index_move_rect][PERSO->index_rect]);
        change_pos_sprite(&PERSO->my_sprite, vector_add);
        if (PERSO->obj_player)
            change_pos_sprite(&PERSO->obj_player, vector_add);
        return (1);
    }
    return (0);
}

int move_perso(
info_game_t *info_, sfVector2f vector_add, int index_rect, statu_move_e statue)
{
    if (move_by_something(info_, &PERSO, vector_add.x, vector_add.y)) {
        PERSO->move.statu = statue;
        PERSO->index_move_rect = index_rect;
        PERSO->index_rect = 0;
        sfSprite_setTextureRect(
        PERSO->my_sprite->sprite, PERSO->rect_move[PERSO->index_move_rect][0]);
        return (1);
    }
    if (already_in_good_direction(info_, vector_add, statue))
        return (0);
    PERSO->move.statu = statue;
    PERSO->index_move_rect = index_rect;
    PERSO->index_rect = 0;
    change_pos_sprite(&PERSO->my_sprite, vector_add);
    if (PERSO->obj_player)
        change_pos_sprite(&PERSO->obj_player, vector_add);
    sfSprite_setTextureRect(
    PERSO->my_sprite->sprite, PERSO->rect_move[PERSO->index_move_rect][0]);
    return (0);
}