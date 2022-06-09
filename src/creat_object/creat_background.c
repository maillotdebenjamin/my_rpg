/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_decor.c
*/
#include "my_rpg.h"

background_t *create_bacground(sprite_t *sprite)
{
    background_t *background = malloc(sizeof(background_t));

    background->sprite = sprite;
    return (background);
}

background_t **create_tab_background(sprite_t **sprite)
{
    int i = 0;
    background_t **tab =
    malloc(sizeof(background_t) * (count_sprite(sprite) + 1));

    for (; sprite[i]; i++) {
        tab[i] = create_bacground(sprite[i]);
    }
    tab[i] = NULL;
    return (tab);
}