/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_button.c
*/
#include "my_rpg.h"

button_t *creat_button(sprite_t *sprite, void (*ptr)(struct info_game *),
sfIntRect rect_click, sfIntRect rect_pass)
{
    button_t *button = malloc(sizeof(button_t));
    button->ptr = ptr;
    button->click_rect = rect_click;
    button->my_sprite = sprite;
    button->pass_rect = rect_pass;
    button->statu = not;
    return (button);
}

button_t **creat_tab_button(sprite_t **tab_sprite,
void (**ptr)(struct info_game *), sfIntRect *tab_rect_click,
sfIntRect *tab_rect_pass)
{
    int i = 0;
    button_t **tab_button =
    malloc(sizeof(button_t *) * (count_sprite(tab_sprite) + 1));

    for (; tab_sprite[i]; i++) {
        tab_button[i] = creat_button(
        tab_sprite[i], ptr[i], tab_rect_click[i], tab_rect_pass[i]);
    }
    tab_button[i] = NULL;
    return (tab_button);
}