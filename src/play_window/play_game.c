/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** play_game.c
*/
#include "my_rpg.h"
#include "window_play.h"
#include "window_inventory.h"

void action_in_game(info_game_t *info_)
{
    can_interact(info_);
    interact_with_obj(info_);
    change_center_view(info_);
    move_rect_pnj(info_);
}

void display_game(info_game_t *info_)
{
    action_in_game(info_);
    sfRenderWindow_setView(info_->my_window->window, info_->game.view);
    sfRenderWindow_clear(info_->my_window->window, sfBlack);
    sfRenderWindow_drawVertexArray(
    info_->my_window->window, info_->game.tab_flor, &(info_->states));
    sfRenderWindow_drawVertexArray(
    info_->my_window->window, info_->game.tab_hauteur_2, &(info_->states));
    display_player(info_, info_->game.perso);
    display_tab_pnj(info_, info_->game.pnj);
    sfRenderWindow_drawVertexArray(
    info_->my_window->window, info_->game.tab_hauteur, &(info_->states));
    display_the_talk(info_);
    display_one_sprite(info_, info_->game.perso->obj_player);
    change_pos_life_bar(info_, info_->fight.players[3]->my_sprite);
    display_one_sprite(info_, info_->fight.players[3]->my_sprite);
    change_pos_text(info_, &info_->game.text_help.text, 0);
    change_pos_text(info_, &info_->game.level.text, 10);
    sfRenderWindow_display(info_->my_window->window);
}

void set_scale_monster(info_game_t *info_)
{
    sfSprite_setScale(info_->game.pnj[3]->my_sprite->sprite, V2F(0.5, 0.5));
    sfSprite_setScale(info_->game.pnj[4]->my_sprite->sprite, V2F(0.5, 0.5));
    sfSprite_setScale(info_->game.pnj[5]->my_sprite->sprite, V2F(0.5, 0.5));
    sfSprite_setScale(info_->game.pnj[6]->my_sprite->sprite, V2F(0.5, 0.5));
}

void event_game(info_game_t *info_)
{
    while (sfRenderWindow_pollEvent(
    info_->my_window->window, &(info_->my_window->event))) {
        info_->mouse =
        sfMouse_getPositionRenderWindow(info_->my_window->window);
        if (!press_keypad(info_) && !press_kp_inventory(info_) &&
        info_->my_window->event.type == sfEvtClosed) {
            go_to_quit(info_);
        }
        if (sfKeyboard_isKeyPressed(sfKeyQ)) {
            info_->statu = quit;
        }
        if (sfKeyboard_isKeyPressed(sfKeyH)) {
            info_->statu = help;
        }
    }
}

int play_game(info_game_t *info_)
{
    sfMusic *game_msc = sfMusic_createFromFile("sound/main-theme.ogg");

    sfMusic_play(game_msc);
    set_scale_monster(info_);
    sfRenderWindow_setFramerateLimit(info_->my_window->window, 60);
    while (info_->statu == game) {
        event_game(info_);
        display_game(info_);
        sfMusic_setLoop(game_msc, sfTrue);
    }
    sfMusic_stop(game_msc);
    sfMusic_destroy(game_msc);
    return (0);
}