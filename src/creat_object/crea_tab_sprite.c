/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** crea_tab_sprite.c
*/
#include "my_rpg.h"
#include "array.h"

sprite_t **create_tab_sprite(
char **filepath, sfVector2f *tab_pos, sfIntRect *rect, type_sprite_t type[])
{
    sprite_t **tab =
    malloc(sizeof(sprite_t *) * (my_array_char_len(filepath) + 1));
    int i = 0;

    for (; filepath[i]; i++) {
        tab[i] = create_sprite(filepath[i], tab_pos[i], rect[i], type[i]);
    }
    tab[i] = NULL;
    return (tab);
}