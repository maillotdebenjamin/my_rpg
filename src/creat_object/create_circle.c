/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** fonction_create_obj.c
*/
#include "my_rpg.h"

sfRectangleShape *creat_rectangle(
sfVector2f pos, sfColor color, sfVector2f size)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(rect, pos);
    sfRectangleShape_setFillColor(rect, color);
    sfRectangleShape_setSize(rect, size);
    return (rect);
}

sfCircleShape *creat_circle(sfVector2f pos, float radius, sfColor color)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, color);
    return (circle);
}

circle_t creat_circle_spell(sfVector2f pos, float radius, sfColor color)
{
    circle_t circle;
    circle.circle = creat_circle(pos, radius, color);
    circle.pos = pos;
    circle.len = V2F(radius, radius);
    circle.open = sfFalse;
    return (circle);
}
