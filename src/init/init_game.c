/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_game.c
*/
#include "my_rpg.h"
#include "window_play.h"
#include "window_fight.h"
#include "pnj.h"
#include "my_lib.h"

void set_val_game(game_t *game)
{
    game->level = creat_text("src/arial.ttf", V2F(0, 0), 20, sfRed);
    game->level.score = 1;
    sfText_setString(game->level.text,
    my_strcat("LEVEL: ", nb_change_to_str(game->level.score)));
    game->choice_pnj = NULL;
    game->talk = NO;
    game->who = ONE;
    game->time_key = 0;
    sprite_t *sprite = create_sprite("image/help.png", V2F(0, 0),
    RECT_I(0, 0, 1200, 800), creat_type_sprite(type_background, sfTrue));
    game->help = create_bacground(sprite);
}

game_t init_game(void)
{
    game_t game;
    sprite_t **tab_pnj =
    create_tab_sprite(PNJ_TAB, PNJ_TAB_POS, PNJ_TAB_RECT, PNJ_TAB_TYPE);
    game.tab_sprite = create_tab_sprite(IMAGE_ASTRONAUT_TAB, ASTRONAUT_POS_TAB,
    ASTRONAUT_RECT_TAB, ASTRONAUT_TAB_TYPE);
    sprite_t *bang = create_sprite(BANG, BANG_POS, BANG_RECT, BANG_TYPE);
    game.perso = creat_player(game.tab_sprite[0],
    creat_triple_tab_rect(PLAYER_TAB_TRIPLE_RECT), bang,
    creat_triple_char("src/config_text_perso", 2));
    game.pnj =
    creat_tab_pnj(tab_pnj, PNJ_TAB_MOVE_RECT, PNJ_TAB_TALK, PNJ_TAB_FUNCTION);
    game.is_fight = NO;
    game.text_help = creat_text("src/arial.ttf", V2F(0, 0), 10, sfRed);
    sfText_setString(game.text_help.text, "PRESS 'H' FOR HELP\n");
    game.rect_shape =
    creat_rectangle(V2F(0, 0), sfColor_fromRGBA(0, 0, 0, 150), V2F(600, 20));
    set_val_game(&game);
    return (game);
}