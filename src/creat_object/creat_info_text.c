/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** creat_info_text.c
*/
#include "my_rpg.h"

info_text_t creat_info_text(char ***tab, char *filepath, sfColor color)
{
    info_text_t text;
    text.text = sfText_create();
    const sfFont *font = sfFont_createFromFile(filepath);
    sfText_setFont(text.text, font);
    if (!tab || !tab[0] || !tab[0][0]) {
        sfText_setString(text.text, "..");
    } else {
        sfText_setString(text.text, tab[0][0]);
    }
    sfText_setColor(text.text, color);
    sfText_setCharacterSize(text.text, 10);
    sfText_setPosition(text.text, V2F(100, 100));
    text.index_x = 0;
    text.index_y = 0;
    text.tab = tab;
    return (text);
}
