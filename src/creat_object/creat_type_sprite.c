/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_type_sprite.c
*/
#include "my_rpg.h"

type_sprite_t creat_type_sprite(name_type_sprite_e name, sfBool open)
{
    type_sprite_t type;

    type.name = name;
    type.open = open;
    return (type);
}
