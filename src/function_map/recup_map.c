/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** recup_map.c
*/
#include "my_rpg.h"
#include "my_lib.h"

void set_pos_quad_vertex(sfVertex *quad, int y, int x)
{
    quad[0].position = V2F(x * 32, y * 32);
    quad[1].position = V2F(x * 32 + 32, y * 32);
    quad[2].position = V2F(x * 32 + 32, y * 32 + 32);
    quad[3].position = V2F(x * 32, y * 32 + 32);
    quad[1].color = sfWhite;
    quad[2].color = sfWhite;
    quad[0].color = sfWhite;
    quad[3].color = sfWhite;
}

void set_default_text(sfVertex *quad)
{
    quad[0].texCoords = V2F(0, 0);
    quad[1].texCoords = V2F(32, 0);
    quad[2].texCoords = V2F(32, 32);
    quad[3].texCoords = V2F(0, 32);
}

void set_text_coord_quad_vertex(sfVertex *quad, int val, sfVector2u vect)
{
    quad[0].texCoords =
    V2F((val % (vect.x / 32) * 32), (val / (vect.x / 32) * 32));
    quad[1].texCoords =
    V2F((val % (vect.x / 32) * 32) + 32, (val / (vect.x / 32) * 32));
    quad[2].texCoords =
    V2F((val % (vect.x / 32) * 32) + 32, (val / (vect.x / 32) * 32) + 32);
    quad[3].texCoords =
    V2F((val % (vect.x / 32) * 32), (val / (vect.x / 32) * 32) + 32);
}

void complete_tab_vertex(
sfVertexArray **tab_map, char **tab, sfVector2i index, sfVector2u vect)
{
    sfVertex quad[4];
    int val = my_getnbr(tab[index.x]);

    if (val == -1) {
        set_pos_quad_vertex(quad, index.y, index.x);
        set_default_text(quad);
        return;
    }
    set_pos_quad_vertex(quad, index.y, index.x);
    set_text_coord_quad_vertex(quad, val, vect);
    for (int a = 0; a < 4; a++) {
        sfVertexArray_append(*tab_map, quad[a]);
    }
}

sfVertexArray *complete_vertex(info_game_t *info_, char *buffer)
{
    sfVertexArray *tab_map = sfVertexArray_create();
    sfVector2u vect = sfTexture_getSize(info_->states.texture);
    char **tab = NULL;
    char **number = NULL;

    tab = my_str_to_word_array(buffer, "\n");
    for (int y = 0; tab[y]; y++) {
        number = my_str_to_word_array(tab[y], ",");
        for (int x = 0; number[x]; x++) {
            complete_tab_vertex(&tab_map, number, V2I(x, y), vect);
        }
    }
    sfVertexArray_setPrimitiveType(tab_map, sfQuads);
    return (tab_map);
}
