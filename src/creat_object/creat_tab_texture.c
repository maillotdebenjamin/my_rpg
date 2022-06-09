/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_tab_texture.c
*/
#include "my_rpg.h"
#include "array.h"

sfTexture **create_tab_texture(char **paths)
{
    sfTexture **array_texture =
    malloc(sizeof(sfTexture *) * (my_array_char_len(paths) + 1));
    int i = 0;

    for (; paths[i]; i++) {
        array_texture[i] = sfTexture_createFromFile(paths[i], NULL);
    }
    array_texture[i] = NULL;
    return (array_texture);
}

void destroy_textures(sfTexture **textures)
{
    int i = 0;

    if (!textures)
        return;
    for (; textures[i]; i++) {
        sfTexture_destroy(textures[i]);
    }
}
