/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** count_sprite.c
*/
#include "my_rpg.h"

int count_sprite(sprite_t **sprite)
{
    int result = 0;

    if (!sprite) {
        return (0);
    }
    while (sprite[result]) {
        result++;
    }
    return (result);
}