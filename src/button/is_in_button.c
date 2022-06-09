/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** click_in_button.c
*/
#include "my_rpg.h"

int mouse_is_in_sprite(info_game_t *info_, sprite_t *sprite)
{
    if (sprite->type.open == sfTrue && info_->mouse.x > sprite->position.x &&
    info_->mouse.x < sprite->position.x + sprite->len.x &&
    info_->mouse.y > sprite->position.y &&
    info_->mouse.y < sprite->position.y + sprite->len.y) {
        return (1);
    }
    return (0);
}

void wait_one_sec(info_game_t *info_, float add)
{
    sfTime future_time = sfClock_getElapsedTime(info_->my_clock->clock);
    sfTime time = sfClock_getElapsedTime(info_->my_clock->clock);

    while (future_time.microseconds + add > time.microseconds) {
        time = sfClock_getElapsedTime(info_->my_clock->clock);
    }
}

void is_in_button(info_game_t *info_, button_t *button)
{
    if (mouse_is_in_sprite(info_, button->my_sprite)) {
        info_->is_in_something = sfTrue;
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfSprite_setTextureRect(
            button->my_sprite->sprite, button->click_rect);
            display_one_button(info_, button);
            sfRenderWindow_display(info_->my_window->window);
            wait_one_sec(info_, 250000.0);
            button->ptr(info_);
            button->statu = click;
        } else {
            button->statu = hover;
            sfSprite_setTextureRect(
            button->my_sprite->sprite, button->pass_rect);
        }
    } else if (button->statu != not) {
        change_rect_sprite(button->my_sprite, button->my_sprite->rect);
        button->statu = not ;
    }
}

void is_in_sprite(
info_game_t *info_, sprite_t *sprite, void (*ptr)(info_game_t *info_))
{
    if (mouse_is_in_sprite(info_, sprite)) {
        info_->is_in_something = sfTrue;
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            ptr(info_);
        }
    }
}
