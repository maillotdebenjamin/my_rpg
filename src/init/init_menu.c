/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_menu.c
*/
#include "my_rpg.h"
#include "window_menu.h"

menu_t init_menu(void)
{
    menu_t menu;
    sprite_t *sprite_background = create_sprite(
    STAR_PIC, STAR_POS, STAR_RECT, creat_type_sprite(type_background, sfTrue));
    menu.background = create_bacground(sprite_background);
    sprite_t **tab_button_sprite = create_tab_sprite(
    TAB_FILEPATH, TAB_POS_BUTTON, TAB_RECT_BUTTON, MENU_TAB_TYPE);
    sprite_t **tab_obj = create_tab_sprite(
    MENU_OBJ_TAB, MENU_TAB_POS_OBJ, MENU_OBJ_TAB_RECT, MENU_OBJ_TAB_TYPE);
    menu.button = creat_tab_button(tab_button_sprite, MENU_BUTTON_FUNC,
    TAB_BUTTON_CLICK_MENU, TAB_BUTTON_RECT_MENU);
    menu.element = creat_tab_obj(tab_obj, MENU_OBJ_TAB_MOVE_RECT);
    return (menu);
}