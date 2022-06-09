/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** interact_with_obj.c
*/
#include "my_rpg.h"

void display_the_talk(info_game_t *info_)
{
    sfVector2f vect;
    sfVector2f val = sfView_getCenter(info_->game.view);
    sfVector2f val2 = sfView_getSize(info_->game.view);

    if (info_->game.talk == YES) {
        sfRectangleShape_setPosition(info_->game.rect_shape,
        V2F(val.x - val2.x / 2, val.y + val2.y / 2 - 20));
        display_rectangle(info_, info_->game.rect_shape);
        vect = sfRectangleShape_getPosition(info_->game.rect_shape);
        if (info_->game.who == ONE) {
            sfText_setPosition(PERSO->text.text, V2F(vect.x, vect.y));
            display_text(info_, PERSO->text.text);
        } else if (info_->game.choice_pnj &&
        info_->game.choice_pnj->text.tab) {
            sfText_setPosition(
            info_->game.choice_pnj->text.text, V2F(vect.x, vect.y));
            display_text(info_, info_->game.choice_pnj->text.text);
        }
    }
}

int verify_continue_talk(info_game_t *info_)
{
    if (info_->game.who == ONE) {
        if (TAB_TEXT_PERSO && TAB_TEXT_PERSO[Y_TEXT_PERSO] &&
        TAB_TEXT_PERSO[Y_TEXT_PERSO][X_TEXT_PERSO] != NULL) {
            X_TEXT_PERSO += 1;
            sfText_setString(info_->game.perso->text.text,
            TAB_TEXT_PERSO[Y_TEXT_PERSO][X_TEXT_PERSO]);
            return (1);
        }
    } else {
        if (TAB_TEXT_PNJ && TAB_TEXT_PNJ[Y_TEXT_PNJ] &&
        TAB_TEXT_PNJ[Y_TEXT_PNJ][X_TEXT_PNJ] != NULL) {
            X_TEXT_PNJ += 1;
            sfText_setString(info_->game.choice_pnj->text.text,
            TAB_TEXT_PNJ[Y_TEXT_PNJ][X_TEXT_PNJ]);
            return (1);
        }
    }
    return (0);
}

int choice_action(info_game_t *info_, sfTime time)
{
    if (info_->game.choice_pnj->ptr != NULL) {
        info_->game.choice_pnj->ptr(info_);
        info_->game.talk = NO;
        return (1);
    } else {
        info_->game.time_key = time.microseconds;
        (info_->game.talk == YES && info_->game.who == ONE) ?
        (info_->game.who = TWO) :
        (info_->game.who = ONE);
        if (!verify_continue_talk(info_)) {
            info_->game.talk = NO;
            info_->game.who = ONE;
            return (1);
        }
        info_->game.talk = YES;
    }
    return (0);
}

int interact_with_obj(info_game_t *info_)
{
    sfTime time = sfClock_getElapsedTime(info_->my_clock->clock);

    if (info_->game.perso->obj_player->type.open == sfTrue &&
    sfKeyboard_isKeyPressed(sfKeyEnter) &&
    info_->game.time_key + 200000 < time.microseconds) {
        choice_action(info_, time);
    }
    return (0);
}