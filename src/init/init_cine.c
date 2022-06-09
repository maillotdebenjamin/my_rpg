/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_cine.c
*/
#include "my_rpg.h"
#include "window_menu.h"

cine_t init_cine(void)
{
    cine_t cine;
    sprite_t *sprite = create_sprite("image/image_tree.png", V2F(0, 0),
    RECT_I(0, 0, 1200, 800), creat_type_sprite(type_background, sfTrue));
    cine.sprite_back = create_bacground(sprite);
    cine.ship = create_sprite(MENU_SHIP, V2F(1000, 0), RECT_I(0, 0, 577, 443),
    creat_type_sprite(type_background, sfTrue));
    return (cine);
}
