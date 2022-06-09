/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_tab_rect.c
*/
#include "my_rpg.h"

int count_len_triple_array_int(int ***tab)
{
    int i = 0;

    if (!tab) {
        return (0);
    }
    while (tab[i] != NULL) {
        i++;
    }
    return (i);
}

int count_len_array_int(int **tab, int int_stop)
{
    int i = 0;

    while (tab[i][0] != int_stop) {
        i++;
    }
    return (i);
}

sfIntRect creat_rect(int left, int top, int width, int height)
{
    sfIntRect rect;

    rect.height = height;
    rect.left = left;
    rect.top = top;
    rect.width = width;
    return (rect);
}

sfIntRect *creat_tab_rect(int **nb)
{
    sfIntRect *tab = malloc(sizeof(*tab) * (count_len_array_int(nb, -1) + 1));
    int i = 0;

    for (; nb[i][0] != -1; i++) {
        tab[i] = creat_rect(nb[i][0], nb[i][1], nb[i][2], nb[i][3]);
    }
    tab[i] = creat_rect(-1, -1, -1, -1);
    return (tab);
}

sfIntRect **creat_triple_tab_rect(int ***nb)
{
    sfIntRect **tab =
    malloc(sizeof(*tab) * (count_len_triple_array_int(nb) + 1));
    int i = 0;

    for (; nb[i] != NULL; i++) {
        tab[i] = creat_tab_rect(nb[i]);
    }
    tab[i] = NULL;
    return (tab);
}