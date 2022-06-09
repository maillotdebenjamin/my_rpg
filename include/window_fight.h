/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** window_fight.h
*/

#ifndef WINDOW_FIGHT_H_
    #define WINDOW_FIGHT_H_
    #include "my_rpg.h"
    #include "window_menu.h"
    #include "window_play.h"

    #define BLUR "image/blur_bg.png"
    #define MAP_FIGHT_1 "image/fight_bg_forest.png"
    #define MAP_FIGHT_2 "image/fight_bg_ruins.jpg"
    #define MAP_FIGHT_3 "image/fight_bg_lost_forest.jpg"

    #define MAPS (char *[]) { \
        MAP_FIGHT_1, \
        MAP_FIGHT_2, \
        MAP_FIGHT_3, \
        NULL \
    }
    #define TAB_STAR_TYPE (type_sprite_t []) { \
        creat_type_sprite(type_background, sfTrue), \
        creat_type_sprite(type_background, sfTrue), \
        creat_type_sprite(type_background, sfTrue) \
    }

    #define TAB_FIGHT (char *[]) { \
        "image/vs_sheet.png", \
        "image/astraunaut_fight.png", \
        "image/mob.png", \
        "image/life_bar.png", \
        "image/life_bar.png", \
        "image/shroud.png", \
        "image/slime1.png", \
        "image/slime2.png", \
        NULL \
    }

    #define LEN_FIGHTER (sfVector2i) { \
        750, 450\
    }
    #define LEN_MOB (sfVector2i) { \
        700, 610\
    }
    #define LEN_MOB_2 (sfVector2i) { \
        413, 120\
    }
    #define LEN_MOB_3 (sfVector2i) { \
        1920, 120\
    }
    #define LEN_MOB_4 (sfVector2i) { \
        1800, 120\
    }

    #define VS_POS (sfVector2f) { \
        LEN_WINDOW_X / 2, \
        LEN_WINDOW_Y / 2 \
    }
    #define FIGHTER_1_POS (sfVector2f) { \
        100, \
        500 \
    }
    #define MOB_POS (sfVector2f) { \
        1000, \
        500 \
    }
    #define PV_FIGHTER_1_POS (sfVector2f) { \
        10, \
        50 \
    }
    #define PV_MOB_POS (sfVector2f) { \
        700, \
        50 \
    }

    #define MOB_ANIMATION_RECT (int *[]) { \
        (int []) { \
            0, 0, 175, 123 \
        } \
        , (int []) { \
            LEN_MOB.x / 4 , 0, 175, 123 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), 0, 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), 0, 175, 120 \
        } \
        , (int []) { \
            0, LEN_MOB.y / 5, 175, 120 \
        } \
        , (int []) { \
            LEN_MOB.x / 4 , LEN_MOB.y / 5, 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), LEN_MOB.y / 5, 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), LEN_MOB.y / 5, 175, 120 \
        } \
        , (int []) { \
            0, (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 1)), 175, 120 \
        } \
        , (int []) { \
            LEN_MOB.x / 4 , (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 1)), 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), (LEN_MOB.y / 5 + \
            (LEN_MOB.y / 5 * 1)), 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), (LEN_MOB.y / 5 + \
            (LEN_MOB.y / 5 * 1)), 175, 120 \
        } \
        , (int []) { \
            0, (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 2)), 175, 120 \
        } \
        , (int []) { \
            LEN_MOB.x / 4 , (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 2)), 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), (LEN_MOB.y / 5 + \
            (LEN_MOB.y / 5 * 2)), 175, 120 \
        } \
        , (int[]) { \
            (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), (LEN_MOB.y / 5 + \
            (LEN_MOB.y / 5 * 2)), 175, 120 \
        } \
        , (int []) { \
            -1, -1, -1, -1\
        }\
    }
    #define MOB2_ANIMATION_RECT (int *[]) { \
        (int []) { \
            0, 0, 113, 120 \
        } \
        , (int []) { \
            LEN_MOB_2.x / 4 + 10, 0, 100, 120\
        } \
        , (int []) { \
            212, 0, 95, 120\
        } \
        , (int []) { \
            306, 0, 107, 120\
        } \
        , (int []) { \
            -1, -1, -1, -1\
        }\
    }
    #define MOB3_ANIMATION_RECT (int *[]) { \
        (int []) { \
            0, 0, 116, 120 \
        } \
        , (int []) { \
            116, 0, 128, 120\
        } \
        , (int []) { \
            244, 0, 118, 120\
        } \
        , (int []) { \
            362, 0, 120, 120\
        } \
        , (int []) { \
            482, 0, 114, 120\
        } \
        , (int []) { \
            596, 0, 120, 120\
        } \
        , (int []) { \
            716, 0, 118, 120\
        } \
        , (int []) { \
            834, 0, 126, 120\
        } \
        , (int []) { \
            960, 0, 120, 120\
        } \
        , (int []) { \
            1080, 0, 118, 120\
        } \
        , (int []) { \
            1198, 0, 118, 120\
        } \
        , (int []) { \
            1316, 0, 116, 120\
        } \
        , (int []) { \
            1432, 0, 124, 120\
        } \
        , (int []) { \
            1556, 0, 122, 120\
        } \
        , (int []) { \
            1678, 0, 120, 120\
        } \
        , (int []) { \
            1798, 0, 122, 120\
        } \
        , (int []) { \
            -1, -1, -1, -1\
        }\
    }
    #define MOB4_ANIMATION_RECT (int *[]) { \
        (int []) { \
            0, 0, 128, 120 \
        } \
        , (int []) { \
            128, 0, 122, 120\
        } \
        , (int []) { \
            250, 0, 124, 120\
        } \
        , (int []) { \
            374, 0, 122, 120\
        } \
        , (int []) { \
            496, 0, 118, 120\
        } \
        , (int []) { \
            614, 0, 118, 120\
        } \
        , (int []) { \
            732, 0, 120, 120\
        } \
        , (int []) { \
            852, 0, 108, 120\
        } \
        , (int []) { \
            960, 0, 128, 120\
        } \
        , (int []) { \
            1088, 0, 115, 120\
        } \
        , (int []) { \
            1203, 0, 120, 120\
        } \
        , (int []) { \
            1323, 0, 122, 120\
        } \
        , (int []) { \
            1445, 0, 113, 120\
        } \
        , (int []) { \
            1558, 0, 128, 120\
        } \
        , (int []) { \
            1686, 0, 114, 120\
        } \
        , (int []) { \
            -1, -1, -1, -1\
        }\
    }
    #define FIGHTER_ANIMATION_SHOOT_RECT (int *[]) { \
        (int []) { \
            450, 0, 150, 150 \
        } \
        , (int []) { \
            LEN_FIGHTER.x / 5 , 0, 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 1)), 0, 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 2)), 0, 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 3)), 0, 150, 150 \
        } \
        , (int []) { \
            0, LEN_FIGHTER.y / 3, 150, 150 \
        } \
        , (int []) { \
            LEN_FIGHTER.x / 5 , LEN_FIGHTER.y / 3, 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 1)), LEN_FIGHTER.y / 3, 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 2)), LEN_FIGHTER.y / 3, 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 3)), LEN_FIGHTER.y / 3, 150, 150 \
        } \
        , (int []) { \
            0, (LEN_FIGHTER.y / 3 + (150 * 1)), 150, 150 \
        } \
        , (int []) { \
            LEN_FIGHTER.x / 5 , (LEN_FIGHTER.y / 3 + (150 * 1)), 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 1)), \
            (LEN_FIGHTER.y / 3 + (150 * 1)), 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 2)), \
            (LEN_FIGHTER.y / 3 + (150 * 1)), 150, 150 \
        } \
        , (int[]) { \
            (LEN_FIGHTER.x / 5 + (150 * 3)), \
            (LEN_FIGHTER.y / 3 + (150 * 1)), 150, 150 \
        } \
        , (int []) { \
            0, (LEN_FIGHTER.y / 3 + (150 * 2)), 150, 150 \
        } \
        , (int []) { \
        -1, -1, -1, -1\
        }\
    }
    #define VS_RECT (sfIntRect) { \
        0, 0, 360, 303\
    }
    #define FIGHTER_RECT (sfIntRect) { \
        450, 0, 150, 150\
    }
    #define MOB_RECT (sfIntRect) { \
        0, 0, 120, 120\
    }
    #define FGT_LIFE1_RECT (sfIntRect) { \
        0, 15, 500, 100\
    }
    #define FGT_LIFE2_RECT (sfIntRect) { \
        0, 15, 500, 100\
    }

    #define TAB_FIGHTER_POS (sfVector2f []) { \
        VS_POS, \
        FIGHTER_1_POS, \
        MOB_POS, \
        PV_FIGHTER_1_POS, \
        PV_MOB_POS, \
        MOB_POS, \
        MOB_POS, \
        MOB_POS \
    }

    #define TAB_FIGHTER_RECT (sfIntRect []) { \
        VS_RECT, \
        FIGHTER_RECT, \
        MOB_RECT, \
        FGT_LIFE1_RECT, \
        FGT_LIFE2_RECT, \
        MOB_RECT, \
        MOB_RECT, \
        MOB_RECT \
    }
    #define TAB_TYPE_FIGHTER (type_sprite_t []) { \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_player_fight, sfTrue), \
        creat_type_sprite(type_enemies_fight, sfTrue), \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_enemies_fight, sfTrue), \
        creat_type_sprite(type_enemies_fight, sfTrue), \
        creat_type_sprite(type_enemies_fight, sfTrue) \
    }

    /*-----------------------------------------------------*/

    #define TAB_BUTTONS_FIGHT (char *[]) { \
        "image/buttons_action1_fight.png", \
        "image/buttons_action2_fight.png", \
        "image/buttons_action3_fight.png", \
        "image/buttons_action4_fight.png", \
        "image/escape.png", \
        NULL \
    }

    #define BUTTONS_ACTION1_POS (sfVector2f) { \
        30, \
        650 \
    }
    #define BUTTONS_ACTION2_POS (sfVector2f) { \
        330, \
        650 \
    }
    #define BUTTONS_ACTION3_POS (sfVector2f) { \
        630, \
        650 \
    }
    #define BUTTONS_ACTION4_POS (sfVector2f) { \
        930, \
        650 \
    }
    #define BUTTONS_FGT_SETTINGS_POS (sfVector2f) { \
        1100, \
        0 \
    }

    #define TAB_BUTTONS_FIGHT_POS (sfVector2f []) { \
        BUTTONS_ACTION1_POS, \
        BUTTONS_ACTION2_POS, \
        BUTTONS_ACTION3_POS, \
        BUTTONS_ACTION4_POS, \
        BUTTONS_FGT_SETTINGS_POS \
    }

    #define BUTTONS_ACTION1_RECT (sfIntRect) { \
        0, 0, 200, 85 \
    }
    #define BUTTONS_ACTION2_RECT (sfIntRect) { \
        0, 0, 200, 85 \
    }
    #define BUTTONS_ACTION3_RECT (sfIntRect) { \
        0, 0, 200, 85 \
    }
    #define BUTTONS_ACTION4_RECT (sfIntRect) { \
        0, 0, 200, 85 \
    }
    #define BUTTONS_SETTINGS_RECT (sfIntRect) { \
        0, 0, 100, 102 \
    }

    #define BUTTONS_ACTION1_RECT_HOVER (sfIntRect) { \
        200, 0, 200, 85 \
    }
    #define BUTTONS_ACTION2_RECT_HOVER (sfIntRect) { \
        200, 0, 200, 85 \
    }
    #define BUTTONS_ACTION3_RECT_HOVER (sfIntRect) { \
        200, 0, 200, 85 \
    }
    #define BUTTONS_ACTION4_RECT_HOVER (sfIntRect) { \
        200, 0, 200, 85 \
    }
    #define BUTTONS_SETTINGS_RECT_HOVER (sfIntRect) { \
        100, 0, 100, 102 \
    }

    #define BUTTONS_ACTION1_RECT_CLICK (sfIntRect) { \
        400, 0, 200, 85 \
    }
    #define BUTTONS_ACTION2_RECT_CLICK (sfIntRect) { \
        400, 0, 200, 85 \
    }
    #define BUTTONS_ACTION3_RECT_CLICK (sfIntRect) { \
        400, 0, 200, 85 \
    }
    #define BUTTONS_ACTION4_RECT_CLICK (sfIntRect) { \
        400, 0, 200, 85 \
    }
    #define BUTTONS_SETTINGS_RECT_CLICK (sfIntRect) { \
        200, 0, 100, 102 \
    }

    #define TAB_BUTTONS_FIGHTS_STATIC (sfIntRect []) { \
        BUTTONS_ACTION1_RECT, \
        BUTTONS_ACTION2_RECT, \
        BUTTONS_ACTION3_RECT, \
        BUTTONS_ACTION4_RECT, \
        BUTTONS_SETTINGS_RECT \
    }

    #define TAB_BUTTONS_FIGHTS_RECT (sfIntRect []) { \
        BUTTONS_ACTION1_RECT_HOVER, \
        BUTTONS_ACTION2_RECT_HOVER, \
        BUTTONS_ACTION3_RECT_HOVER, \
        BUTTONS_ACTION4_RECT_HOVER, \
        BUTTONS_SETTINGS_RECT_HOVER \
    }

    #define TAB_BUTTONS_FIGHTS_RECT_CLICK (sfIntRect []) { \
        BUTTONS_ACTION1_RECT_CLICK, \
        BUTTONS_ACTION2_RECT_CLICK, \
        BUTTONS_ACTION3_RECT_CLICK, \
        BUTTONS_ACTION4_RECT_CLICK, \
        BUTTONS_SETTINGS_RECT_CLICK \
    }

    #define TAB_TYPE_BUTTONS_FIGHT (type_sprite_t []) { \
        creat_type_sprite(type_button, sfTrue), \
        creat_type_sprite(type_button, sfTrue), \
        creat_type_sprite(type_button, sfTrue), \
        creat_type_sprite(type_button, sfTrue), \
        creat_type_sprite(type_button, sfTrue) \
    }

    #define TAB_STAR_POS (sfVector2f []) {\
        STAR_POS, \
        STAR_POS, \
        STAR_POS \
    }
    #define TAB_STAR_RECT (sfIntRect []) {\
        STAR_RECT, \
        STAR_RECT, \
        STAR_RECT \
    }

void fgt_action_1(info_game_t *info_);
void fgt_action_2(info_game_t *info_);
void fgt_action_3(info_game_t *info_);
void fgt_action_4(info_game_t *info_);
void settings_fight(info_game_t *info_);
fight_t init_fight(void);
void display_fight(info_game_t *info_);
void event_fight(info_game_t *info_);
int play_fight(info_game_t *info_);
void go_to_fight(info_game_t *info_);
void animation_shoot(info_game_t *info_, obj_t *player);
void animation_attack(info_game_t *info_, obj_t *player, int *index);
void animation_dodge(info_game_t *info_, obj_t *player, int *index);
void animation_attack_mob(info_game_t *info_, obj_t *mob, int *index);
background_t **create_tab_background(sprite_t **sprite);
void animation_attack_mob_missed(info_game_t *info_, obj_t *mob, int *index);
void change_rect_mob1_animation(info_game_t * info_, obj_t * obj);
void begin_fight_mob_one(info_game_t *info_);
void begin_fight_mob_two(info_game_t *info_);
void begin_fight_mob_three(info_game_t *info_);
void begin_fight_mob_four(info_game_t *info_);
void change_pv_rect(obj_t *player, int life);

#endif