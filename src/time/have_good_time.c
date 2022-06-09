/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** have_good_time.c
*/
#include "my_rpg.h"

int pnj_have_good_time(info_game_t *info_, pnj_t **perso, double speed)
{
    (void)info_;
    (*perso)->my_clock->time =
    sfClock_getElapsedTime((*perso)->my_clock->clock);
    if ((*perso)->my_clock->time.microseconds > speed) {
        sfClock_restart((*perso)->my_clock->clock);
        return 1;
    }
    return (0);
}

int perso_have_good_time(info_game_t *info_, player_t **perso, double speed)
{
    (void)info_;
    (*perso)->my_clock->time =
    sfClock_getElapsedTime((*perso)->my_clock->clock);
    if ((*perso)->my_clock->time.microseconds > speed) {
        sfClock_restart((*perso)->my_clock->clock);
        return 1;
    }
    return (0);
}

int have_good_time(info_game_t *info_, obj_t *obj, double speed)
{
    (void)info_;
    obj->my_clock->time = sfClock_getElapsedTime(obj->my_clock->clock);
    if (obj->my_clock->time.microseconds / speed > 0.05) {
        sfClock_restart(obj->my_clock->clock);
        return 1;
    }
    return (0);
}
