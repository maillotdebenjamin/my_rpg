/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_pnj.c
*/
#include "my_rpg.h"

pnj_t *creat_pnj(sprite_t *sprite, sfIntRect **tab_rect, char ***tab,
void (*ptr)(struct info_game *))
{
    pnj_t *pnj = malloc(sizeof(pnj_t));

    pnj->my_sprite = sprite;
    pnj->rect_move = tab_rect;
    pnj->index_move_rect = 0;
    pnj->index_rect = 0;
    pnj->my_clock = create_clock();
    pnj->text = creat_info_text(tab, "src/arial.ttf", sfRed);
    pnj->ptr = ptr;
    return (pnj);
}

pnj_t **creat_tab_pnj(sprite_t **sprite, sfIntRect ***tab_rect,
char ****tab_word, void (**ptr)(struct info_game *))
{
    pnj_t **pnj = malloc(sizeof(pnj_t *) * (count_sprite(sprite) + 1));
    int i = 0;

    for (; sprite[i]; i++) {
        pnj[i] = creat_pnj(sprite[i], tab_rect[i], tab_word[i], ptr[i]);
    }
    pnj[i] = NULL;
    return (pnj);
}
