/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** display_fight.c
*/

#include "my_rpg.h"
#include "window_fight.h"

static int const *RECT_CHANGE_PV[] = {(int[]){5, 0}, (int[]){4, 82},
(int[]){3, 160}, (int[]){2, 240}, (int[]){1, 317}, (int[]){0, 390}, NULL};

void display_tab_obj_fight(info_game_t *info_, obj_t **tab)
{
    if (!tab) {
        return;
    }
    for (int i = 0; tab[i]; i++) {
        if (i != info_->fight.mob_index && i > 4)
            continue;
        if (i != info_->fight.mob_index && i == 2)
            continue;
        if (tab[i]->my_sprite->type.open == sfTrue &&
        tab[i]->my_sprite->position.x < LEN_WINDOW_X &&
        tab[i]->my_sprite->position.x > 0 &&
        tab[i]->my_sprite->position.y < LEN_WINDOW_Y) {
            sfRenderWindow_drawSprite(
            info_->my_window->window, tab[i]->my_sprite->sprite, NULL);
        }
    }
}

void display_vs_animation(info_game_t *info_, obj_t *tab)
{
    sfTime time2 = sfClock_getElapsedTime(info_->my_clock->clock);
    sfTime time = sfClock_getElapsedTime(info_->my_clock->clock);
    sfVector2f vect = V2F(1, 1);

    if (!tab)
        return;
    display_backround(info_, info_->fight.bg[info_->fight.map_index]);
    while (vect.x > 0) {
        time2 = sfClock_getElapsedTime(info_->my_clock->clock);
        if (time.microseconds + 100000 < (time2.microseconds)) {
            vect = (sfVector2f){vect.x - 0.05, vect.y - 0.05};
            time = sfClock_getElapsedTime(info_->my_clock->clock);
            sfSprite_setScale(tab->my_sprite->sprite, vect);
            display_backround(info_, info_->fight.blur);
            sfRenderWindow_drawSprite(
            info_->my_window->window, tab->my_sprite->sprite, NULL);
            sfRenderWindow_display(info_->my_window->window);
        }
    }
}

void change_pv_rect(obj_t *player, int life)
{
    for (int i = 0; RECT_CHANGE_PV[i] != NULL; i++) {
        if (RECT_CHANGE_PV[i][0] == life) {
            player->my_sprite->rect.top = RECT_CHANGE_PV[i][1];
            break;
        }
    }
    sfSprite_setTextureRect(
    player->my_sprite->sprite, player->my_sprite->rect);
}

void display_fight(info_game_t *info_)
{
    if (info_->fight.life_player1 <= 0 || info_->fight.life_mob <= 0) {
        display_backround(info_, info_->fight.blur);
        info_->statu = quit;
    }
    if (info_->fight.anim_vs == not_done) {
        display_vs_animation(info_, info_->fight.players[0]);
        info_->fight.anim_vs = done;
    }
    change_pv_rect(info_->fight.players[3], info_->fight.life_player1);
    change_pv_rect(info_->fight.players[4], info_->fight.life_mob);
    if (have_good_time(
        info_, info_->fight.players[info_->fight.mob_index], 3000000.00))
        change_rect_obj(info_, info_->fight.players[info_->fight.mob_index]);
    display_backround(info_, info_->fight.bg[info_->fight.map_index]);
    display_tab_obj_fight(info_, info_->fight.players);
    display_tab_button(info_, info_->fight.buttons);
    sfRenderWindow_display(info_->my_window->window);
}