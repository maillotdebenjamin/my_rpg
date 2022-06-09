/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** change_center_view.c
*/
#include "my_rpg.h"

int change_center_view(info_game_t *info_)
{
    sfVector2f size = sfView_getSize(info_->game.view);
    sfVector2f center = sfView_getCenter(info_->game.view);

    if (POS_PERSO.x + (LEN_PERSO.x / 2) - (size.x / 2) >= 0 &&
    POS_PERSO.y + (LEN_PERSO.y / 2) - (size.y / 2) >= 0 &&
    POS_PERSO.x + (LEN_PERSO.x / 2) + (size.x / 2) <= 1230 &&
    POS_PERSO.y + (LEN_PERSO.y / 2) + (size.y / 2) <= 1230) {
        sfView_setCenter(info_->game.view,
        V2F(POS_PERSO.x + LEN_PERSO.x / 2, POS_PERSO.y + LEN_PERSO.y / 2));
    } else if ((POS_PERSO.x + (LEN_PERSO.x / 2) - (size.x / 2)) >= 0 &&
    POS_PERSO.x + (LEN_PERSO.x / 2) + (size.x / 2) <= 1230) {
        sfView_setCenter(
        info_->game.view, V2F(POS_PERSO.x + LEN_PERSO.x / 2, center.y));
    } else if (POS_PERSO.y + (LEN_PERSO.y / 2) - (size.y / 2) >= 0 &&
    POS_PERSO.y + (LEN_PERSO.y / 2) + (size.y / 2) <= 1230) {
        sfView_setCenter(
        info_->game.view, V2F(center.x, POS_PERSO.y + LEN_PERSO.y / 2));
    }
    return (0);
}
