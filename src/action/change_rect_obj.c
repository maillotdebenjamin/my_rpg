/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** change_rect_obj.c
*/
#include "my_rpg.h"

void change_rect_obj(info_game_t *info_, obj_t *obj)
{
    (void)info_;
    if (!obj->tab) {
        return;
    }
    if (obj->tab[obj->index].height == -1) {
        obj->index = 0;
    }
    sfSprite_setTextureRect(obj->my_sprite->sprite, obj->tab[obj->index]);
    obj->index += 1;
}