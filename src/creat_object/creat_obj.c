/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_obj.c
*/
#include "my_rpg.h"

obj_t *creat_obj(sprite_t *sprite, sfIntRect *tab)
{
    obj_t *obj = malloc(sizeof(*obj));

    obj->my_sprite = sprite;
    obj->tab = tab;
    obj->my_clock = create_clock();
    obj->index = 0;
    return (obj);
}

obj_t **creat_tab_obj(sprite_t **sprite, sfIntRect **tab)
{
    obj_t **obj = malloc(sizeof(*obj) * (count_sprite(sprite) + 1));
    int i = 0;

    for (; sprite[i]; i++) {
        obj[i] = creat_obj(sprite[i], tab[i]);
    }
    obj[i] = NULL;
    return (obj);
}