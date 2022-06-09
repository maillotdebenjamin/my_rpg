/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** init_inventory.c
*/

#include "my_rpg.h"
#include "window_play.h"
#include "window_menu.h"
#include "window_inventory.h"

void init_val_inventory(inventory_t *invent)
{
    sprite_t **sprite_description = create_tab_sprite(TAB_DESCRIPTION,
    TAB_DESCRIPTION_POS, TAB_DESCRIPTION_RECT, TAB_TYPE_DESCRIPTION);

    invent->description = creat_tab_obj(sprite_description, RECT_DESCRIPTION);
    invent->apple = 0;
    invent->munitions = 1;
    invent->piece = 0;
    invent->potion_life = 1;
    invent->tea = 0;
}

inventory_t init_inventory(void)
{
    inventory_t inventory;
    sprite_t **sprite_items = create_tab_sprite(TAB_INVENTORY,
    TAB_INVENTORY_POS, TAB_INVENTORY_RECT, TAB_TYPE_OBJ_INVENTORY);
    sprite_t *sprite_background = create_sprite("image/inventory.png",
    STAR_POS, STAR_RECT, creat_type_sprite(type_background, sfTrue));

    inventory.background = create_bacground(sprite_background);
    inventory.items = creat_tab_obj(sprite_items,
    (sfIntRect *[]){creat_tab_rect(TAB_AMMUNITION_RECT),
    creat_tab_rect(TAB_POTION_RECT), creat_tab_rect(TAB_APPLE_RECT),
    creat_tab_rect(TAB_TEA_RECT), creat_tab_rect(TAB_PIECE_RECT), NULL});
    init_val_inventory(&inventory);
    return inventory;
}