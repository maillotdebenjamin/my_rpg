/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_map.c
*/
#include "my_rpg.h"
#include "open_file.h"
#include "my_lib.h"

void init_hauteur(info_game_t *info_, game_t *game)
{
    char *buffer = NULL;

    if (open_read_whith_getline(&buffer, "MAP/map_hauteurs1.csv") == -1) {
        game->tab_hauteur = NULL;
    } else {
        game->tab_hauteur = complete_vertex(info_, buffer);
        buffer = NULL;
    }
    if (open_read_whith_getline(&buffer, "MAP/map_hauteurs2.csv") == -1) {
        game->tab_hauteur_2 = NULL;
    } else {
        game->tab_hauteur_2 = complete_vertex(info_, buffer);
        buffer = NULL;
    }
}

void init_map(info_game_t *info_, game_t *game)
{
    char *buffer = NULL;

    if (open_read_whith_getline(&buffer, "MAP/map_sols1 (1).csv") == -1) {
        game->tab_flor = NULL;
    } else {
        game->tab_flor = complete_vertex(info_, buffer);
        buffer = NULL;
    }
    if (open_read_whith_getline(&buffer, "MAP/map_passages (1).csv") == -1) {
        game->tab_passage = NULL;
    } else {
        game->tab_passage = complete_vertex(info_, buffer);
        buffer = NULL;
    }
    init_hauteur(info_, game);
}