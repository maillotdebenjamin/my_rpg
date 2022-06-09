/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ethan.guilloux
** File description:
** display_element.c
*/
#include "my_rpg.h"

void display_backround(info_game_t *info_, background_t *back)
{
    if (!back) {
        return;
    }
    sfRenderWindow_drawSprite(
    info_->my_window->window, back->sprite->sprite, NULL);
}

void display_one_sprite(info_game_t *info_, sprite_t *my_sprite)
{
    if (my_sprite->type.open == sfTrue) {
        sfRenderWindow_drawSprite(
        info_->my_window->window, my_sprite->sprite, NULL);
    }
}

void display_rectangle(info_game_t *info_, sfRectangleShape *rect)
{
    sfRenderWindow_drawRectangleShape(info_->my_window->window, rect, NULL);
}

void display_player(info_game_t *info_, player_t *player)
{
    if (player->my_sprite->type.open == sfTrue) {
        sfRenderWindow_drawSprite(
        info_->my_window->window, player->my_sprite->sprite, NULL);
    }
}

void display_text(info_game_t *info_, sfText *text)
{
    sfRenderWindow_drawText(info_->my_window->window, text, NULL);
}