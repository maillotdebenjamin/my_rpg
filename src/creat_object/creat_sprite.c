/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_file.c
*/
#include "my_rpg.h"

sprite_t *create_sprite(
char *filepath, sfVector2f position, sfIntRect rect, type_sprite_t type)
{
    sprite_t *my_sprite = malloc(sizeof(sprite_t));

    my_sprite->sprite = sfSprite_create();
    my_sprite->position = position;
    my_sprite->rect = rect;
    my_sprite->name = filepath;
    my_sprite->texture = sfTexture_createFromFile(filepath, NULL);
    my_sprite->type = type;
    my_sprite->len = V2I(rect.width, rect.height);
    sfSprite_setPosition(my_sprite->sprite, my_sprite->position);
    sfSprite_setTexture(my_sprite->sprite, my_sprite->texture, sfTrue);
    sfSprite_setTextureRect(my_sprite->sprite, my_sprite->rect);
    return (my_sprite);
}