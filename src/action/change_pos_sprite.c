/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** change_pos_sprite.c
*/
#include "my_rpg.h"
#include "window_fight.h"

int change_pos_sprite(sprite_t **sprite, sfVector2f vector_add)
{
    (*sprite)->position.x += vector_add.x;
    (*sprite)->position.y += vector_add.y;
    sfSprite_move((*sprite)->sprite, vector_add);
    return (0);
}

int change_pos_life_bar(info_game_t *info_, sprite_t *sprite)
{
    sfVector2f val = sfView_getCenter(info_->game.view);
    sfVector2f val2 = sfView_getSize(info_->game.view);

    (void)info_;
    sfSprite_setScale(sprite->sprite, V2F(0.5, 0.5));
    sfSprite_setPosition(sprite->sprite,
    V2F(val.x + val2.x / 2 - sprite->len.x / 2, val.y - val2.y / 2));
    change_pv_rect(info_->fight.players[3], info_->fight.life_player1);
    return (0);
}

int change_pos_text(info_game_t *info_, sfText **text, float add)
{
    sfVector2f val = sfView_getCenter(info_->game.view);
    sfVector2f val2 = sfView_getSize(info_->game.view);

    sfText_setPosition(
    *text, V2F(val.x - val2.x / 2, (val.y - val2.y / 2) + add));
    display_text(info_, *text);
    return (0);
}

void change_gravity_ship_menu(info_game_t *info_, obj_t *obj)
{
    (void)info_;
    if (!obj->tab) {
        return;
    }
    if (obj->my_sprite->position.y > 340 && obj->index == 0) {
        obj->my_sprite->position.y -= 0.008;
    } else {
        obj->index = 1;
    }
    if (obj->my_sprite->position.y < 380 && obj->index == 1) {
        obj->my_sprite->position.y += 0.008;
    } else {
        obj->index = 0;
    }
    sfSprite_setPosition(obj->my_sprite->sprite, obj->my_sprite->position);
}
