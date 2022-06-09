/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_player.c
*/
#include "my_rpg.h"

void init_obj_player(player_t **player, sprite_t *obj_player)
{
    if (obj_player) {
        (*player)->obj_player->position =
        V2F((*player)->my_sprite->position.x - obj_player->len.x / 2,
        (*player)->my_sprite->position.y - obj_player->len.y / 3 * 3);
        sfSprite_setPosition(
        (*player)->obj_player->sprite, (*player)->obj_player->position);
    }
}

player_t *creat_player(
sprite_t *sprite, sfIntRect **tab_rect, sprite_t *obj_player, char ***tab)
{
    player_t *player = malloc(sizeof(player_t));

    player->move = (move_t){
        stop, 0, 0
    };
    player->my_sprite = sprite;
    player->rect_move = tab_rect;
    player->index_move_rect = 0;
    player->index_rect = 0;
    player->my_clock = create_clock();
    player->obj_player = obj_player;
    player->text = creat_info_text(tab, "src/arial.ttf", sfBlue);
    init_obj_player(&player, obj_player);
    return (player);
}

player_t **creat_tab_player(
sprite_t **sprite, sfIntRect ***tab_rect, char ****tab_word)
{
    player_t **player =
    malloc(sizeof(player_t *) * (count_sprite(sprite) + 1));
    int i = 0;

    for (; sprite[i]; i++) {
        player[i] = creat_player(sprite[i], tab_rect[i], NULL, tab_word[i]);
    }
    player[i] = NULL;
    return (player);
}
