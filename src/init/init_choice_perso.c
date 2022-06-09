/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_choice_level.c
*/
#include "my_rpg.h"
#include "window_play.h"

choice_perso_t init_choice_perso(void)
{
    choice_perso_t choice;
    sprite_t **tab_button_sprite = create_tab_sprite(TAB_CHOICE_PLAYER,
    CHOICE_PLAYER_TAB_POS, CHOICE_PLAYER_TAB_RECT, CHOICE_PLAYER_TAB_TYPE);
    choice.button = creat_tab_button(tab_button_sprite,
    (void (*[])(struct info_game *)){
    &go_to_game_and_choice_perso, &go_to_game_and_choice_perso, NULL
    }
    ,
    CHOICE_PLAYER_TAB_CLICK, CHOICE_PLAYER_TAB_PASS);
    return choice;
}