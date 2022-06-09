/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_stat.c
*/
#include "my_rpg.h"

sfRenderStates creat_stat(char *filepath)
{
    sfRenderStates states;
    states.blendMode = sfBlendAlpha;
    states.texture = sfTexture_createFromFile(filepath, NULL);
    states.shader = NULL;
    states.transform = sfTransform_Identity;
    return (states);
}