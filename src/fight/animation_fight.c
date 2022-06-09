/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** animation_fight.c
*/

#include "my_rpg.h"
#include "window_fight.h"

void animation_attack(info_game_t *info_, obj_t *player, int *index)
{
    if (player->my_sprite->position.x > 1000)
        info_->fight.life_mob -= info_->fight.dam_player1;
    if (*index == 0 && player->my_sprite->type.name == type_player_fight &&
    player->my_sprite->position.x <= 1000) {
        player->my_sprite->position.x += 17;
    } else {
        *index = 1;
        player->my_sprite->position.x -= 17;
    }
    sfSprite_setPosition(
    player->my_sprite->sprite, player->my_sprite->position);
}

void animation_attack_mob(info_game_t *info_, obj_t *mob, int *index)
{
    if (*index == 0 && mob->my_sprite->position.x >= 100) {
        mob->my_sprite->position.x -= 17;
    } else {
        *index = 1;
        mob->my_sprite->position.x += 17;
    }
    if (mob->my_sprite->position.x == 99.00) {
        info_->fight.life_player1 -= info_->fight.dam_mob;
    }
    sfSprite_setPosition(mob->my_sprite->sprite, mob->my_sprite->position);
}

void animation_attack_mob_missed(info_game_t *info_, obj_t *mob, int *index)
{
    int i = 0;
    if (*index == 0 && mob->my_sprite->position.x >= 100) {
        mob->my_sprite->position.x -= 17;
    } else {
        *index = 1;
        mob->my_sprite->position.x += 17;
    }
    if (mob->my_sprite->position.x == 99.00) {
        for (;
        i != 1 || info_->fight.players[1]->my_sprite->position.x > 50;) {
            animation_dodge(info_, info_->fight.players[1], &i);
            display_fight(info_);
        }
    }
    sfSprite_setPosition(mob->my_sprite->sprite, mob->my_sprite->position);
}

void animation_dodge(info_game_t *info_, obj_t *player, int *index)
{
    (void)info_;
    if (*index == 0 && player->my_sprite->type.name == type_player_fight &&
    player->my_sprite->position.x <= 100) {
        player->my_sprite->position.x += 8;
    } else {
        *index = 1;
        player->my_sprite->position.x -= 8;
    }
    sfSprite_setPosition(
    player->my_sprite->sprite, player->my_sprite->position);
}

void animation_shoot(info_game_t *info_, obj_t *player)
{
    if (player->my_sprite->type.name == type_player_fight &&
    have_good_time(info_, player, 1000000.00)) {
        sfSprite_setTextureRect(
        player->my_sprite->sprite, player->tab[player->index]);
        player->index += 1;
    }
}
