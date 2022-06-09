/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_clock.c
*/
#include "my_rpg.h"

time_clock_t *create_clock(void)
{
    time_clock_t *clock = malloc(sizeof(time_clock_t));

    clock->clock = sfClock_create();
    clock->time = sfClock_getElapsedTime(clock->clock);
    return (clock);
}
