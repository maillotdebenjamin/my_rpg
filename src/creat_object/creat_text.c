/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ethan.guilloux
** File description:
** create_struct_help.c
*/
#include "my_rpg.h"

text_t creat_text(char *filepath, sfVector2f pos, int size, sfColor color)
{
    text_t text;
    text.text = sfText_create();
    text.time = create_clock();
    text.score = 0;
    const sfFont *font = sfFont_createFromFile(filepath);
    sfText_setFont(text.text, font);
    sfText_setString(text.text, nb_change_to_str(text.score));
    sfText_setColor(text.text, color);
    sfText_setCharacterSize(text.text, size);
    sfText_setPosition(text.text, pos);
    return (text);
}
