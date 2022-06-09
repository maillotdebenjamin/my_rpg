/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sprite_is_next_to_sprite.c
*/
#include "my_rpg.h"
#include <math.h>

int return_distance(sprite_t *dest, sprite_t *sprite)
{
    return (sqrt(pow((sprite->position.x + (sprite->len.x / 2)) -
    (dest->position.x + dest->len.x / 2), 2) +
    pow((sprite->position.y + (dest->len.y / 2)) -
    (dest->position.y + dest->len.y / 2),
    2)));
}

int point_is_in_sprite(sprite_t *my_sprite, sfVector2f vector)
{
    if (my_sprite->position.x <= vector.x &&
    my_sprite->position.y <= vector.y &&
    my_sprite->position.x + my_sprite->len.x >= vector.x &&
    my_sprite->position.y + my_sprite->len.y >= vector.y) {
        return (1);
    }
    return (0);
}

int sprite_is_next_to_sprite(
info_game_t *info_, sprite_t *my_sprite, sprite_t *dest, int add)
{
    (void)info_;
    if (return_distance(my_sprite, dest) <= add) {
        return (1);
    }
    return (0);
}
