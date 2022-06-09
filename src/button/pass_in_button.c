/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** pass_in_button.c
*/
#include "my_rpg.h"

void change_size_sprite(sprite_t *sprite, sfVector2f vector)
{
    sfSprite_setScale(sprite->sprite, vector);
    sfSprite_setPosition(sprite->sprite,
    V2F(sprite->position.x - ((sprite->len.x * vector.x) - (sprite->len.x)),
    sprite->position.y - ((sprite->len.y * vector.y) - sprite->len.y)));
}

void restart_size(sprite_t *sprite, sfVector2f power)
{
    sfSprite_setScale(sprite->sprite, V2F(power.x, power.y));
    sfSprite_setPosition(
    sprite->sprite, V2F(sprite->position.x, sprite->position.y));
}

void change_rect_sprite(sprite_t *sprite, sfIntRect rect)
{
    sfSprite_setTextureRect(sprite->sprite, rect);
}
