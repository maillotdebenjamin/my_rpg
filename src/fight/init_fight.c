/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** init_fight.c
*/

#include "my_rpg.h"
#include "window_menu.h"
#include "window_play.h"
#include "window_fight.h"

void init_val_fight(fight_t *fight)
{
    sprite_t **tab_buttons_sprite = create_tab_sprite(TAB_BUTTONS_FIGHT,
    TAB_BUTTONS_FIGHT_POS, TAB_BUTTONS_FIGHTS_STATIC , TAB_TYPE_BUTTONS_FIGHT);
    fight->buttons = creat_tab_button(tab_buttons_sprite,
    (void (*[])(struct info_game *)){
        &fgt_action_1, &fgt_action_2,
        &fgt_action_3, &fgt_action_4, &settings_fight, NULL
    }
    ,
    TAB_BUTTONS_FIGHTS_RECT_CLICK, TAB_BUTTONS_FIGHTS_RECT);
    fight->statu_mob = stand;
    fight->bg_now = fight->bg[0];
    fight->anim_vs = not_done;
    fight->animation = not_done;
    fight->map_index = 1;
    fight->life_player1 = 5;
    fight->mob_index = 7;
    fight->life_mob = 5;
    fight->dam_player1 = 1;
    fight->dam_mob = 1;
}

fight_t init_fight(void)
{
    fight_t fight;
    sprite_t **sprite_background = create_tab_sprite(MAPS, TAB_STAR_POS,
    TAB_STAR_RECT, TAB_STAR_TYPE);
    fight.bg = create_tab_background(sprite_background);
    sprite_t *sprite_blur = create_sprite(BLUR, STAR_POS, STAR_RECT,
    creat_type_sprite(type_background, sfTrue));
    fight.blur = create_bacground(sprite_blur);
    sprite_t **tab_persos_sprite = create_tab_sprite(TAB_FIGHT,
    TAB_FIGHTER_POS, TAB_FIGHTER_RECT, TAB_TYPE_FIGHTER);
    fight.players = creat_tab_obj(tab_persos_sprite, (sfIntRect *[]){
    &VS_RECT, creat_tab_rect(FIGHTER_ANIMATION_SHOOT_RECT),
    creat_tab_rect(MOB_ANIMATION_RECT), &FGT_LIFE1_RECT, &FGT_LIFE2_RECT,
    creat_tab_rect(MOB2_ANIMATION_RECT),creat_tab_rect(MOB3_ANIMATION_RECT),
    creat_tab_rect(MOB4_ANIMATION_RECT), NULL});
    init_val_fight(&fight);
    return fight;
}
