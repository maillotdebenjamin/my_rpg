/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-mael.pompilius
** File description:
** window_inventory.h
*/

#ifndef __WINDOW_INVENTORY_H__
    #define __WINDOW_INVENTORY_H__

    #include "my_rpg.h"
    #include "window_menu.h"
    #include "window_play.h"

    #define TAB_INVENTORY (char *[]) { \
        "image/munitions.png", \
        "image/potion_life.png", \
        "image/apple.png", \
        "image/tea.png", \
        "image/piece.png", \
        NULL \
    }

    #define QUIT_BUTTON_INVENTORY_POS (sfVector2f) { \
        400, 200\
    }

    #define QUIT_BUTTON_INVENTORY_RECT (sfIntRect) { \
        0, 0, 400, 400\
    }

    #define LEN_ITEMS (sfVector2i) { \
        300, 79\
    }

    #define LEN_PIECE (sfVector2i) { \
        150, 79\
    }

    #define AMMUNITION_POS (sfVector2f) { \
        150, 280\
    }

    #define POTION_POS (sfVector2f) { \
        520, 290\
    }

    #define APPLE_POS (sfVector2f) { \
        890, 290\
    }

    #define TEA_POS (sfVector2f) { \
        150, 530\
    }

    #define PIECE_POS (sfVector2f) { \
        480, 520\
    }

    #define AMMUNITION_RECT (sfIntRect) { \
        0, 0, 800, 211\
    }

    #define POTION_RECT (sfIntRect) { \
        0, 0, 800, 211\
    }

    #define APPLE_RECT (sfIntRect) { \
        0, 0, 800, 211\
    }

    #define TEA_RECT (sfIntRect) { \
        0, 0, 800, 211\
    }

    #define PIECE_RECT (sfIntRect) { \
        0, 0, 499, 253\
    }

    #define TAB_INVENTORY_RECT (sfIntRect []) { \
        AMMUNITION_RECT, \
        POTION_RECT, \
        APPLE_RECT, \
        TEA_RECT, \
        PIECE_RECT \
    }

    #define TAB_AMMUNITION_RECT (int *[]) { \
        (int []) { \
            0, 0, 200, 211 \
        } \
        , (int []) { \
            200, 0, 200, 211 \
        } \
        , (int []) { \
            400, 0, 200, 211 \
        } \
        , (int []) { \
            600, 0, 200, 211 \
        } \
        , (int []) { \
            -1, -1, -1, -1 \
        } \
    }

    #define TAB_POTION_RECT (int *[]) { \
        (int []) { \
            0, 0, 200, 211 \
        } \
        , (int []) { \
            200, 0, 200, 211 \
        } \
        , (int []) { \
            400, 0, 200, 211 \
        } \
        , (int []) { \
            600, 0, 200, 211 \
        } \
        , (int []) { \
            -1, -1, -1, -1 \
        } \
    }

    #define TAB_APPLE_RECT (int *[]) { \
        (int []) { \
            0, 0, 200, 211 \
        } \
        , (int []) { \
            200, 0, 200, 211 \
        } \
        , (int []) { \
            400, 0, 200, 211 \
        } \
        , (int []) { \
            600, 0, 200, 211 \
        } \
        , (int []) { \
            -1, -1, -1, -1 \
        } \
    }

    #define TAB_TEA_RECT (int *[]) { \
        (int []) { \
            0, 0, 200, 211 \
        } \
        , (int []) { \
            200, 0, 200, 211 \
        } \
        , (int []) { \
            400, 0, 200, 211 \
        } \
        , (int []) { \
            600, 0, 200, 211 \
        } \
        , (int []) { \
            -1, -1, -1, -1 \
        } \
    }

    #define TAB_PIECE_RECT (int *[]) { \
        (int []) { \
            0, 0, 250, 211 \
        } \
        , (int []) { \
            250, 0, 250, 211 \
        } \
        , (int []) { \
            -1, -1, -1, -1 \
        } \
    }

    #define TAB_INVENTORY_POS (sfVector2f []) { \
        AMMUNITION_POS, \
        POTION_POS, \
        APPLE_POS, \
        TEA_POS, \
        PIECE_POS \
    }

    #define TAB_TYPE_OBJ_INVENTORY (type_sprite_t []) { \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_obj, sfTrue), \
        creat_type_sprite(type_obj, sfTrue) \
    }

    #define TAB_DESCRIPTION_POS (sfVector2f []) { \
        DESCRIPTION_AMMUNITION_POS, \
        DESCRIPTION_POTION_POS, \
        DESCRIPTION_APPLE_POS, \
        DESCRIPTION_TEA_POS, \
        DESCRIPTION_PIECE_POS \
    }

    #define TAB_TYPE_DESCRIPTION (type_sprite_t []) { \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue) \
    }

    #define TAB_DESCRIPTION (char *[]) { \
        "image/description_ammunition.png", \
        "image/description_potion.png", \
        "image/description_apple.png", \
        "image/description_tea.png", \
        "image/description_piece.png", \
        NULL \
    }

    #define LEN_DESCRIPTION_AMMUNITION (sfVector2i) { \
        0, 0\
    }

    #define LEN_DESCRIPTION_POTION (sfVector2i) { \
        0, 0\
    }

    #define LEN_DESCRIPTION_APPLE (sfVector2i) { \
        0, 0\
    }

    #define LEN_DESCRIPTION_TEA (sfVector2i) { \
        0, 0\
    }

    #define DESCRIPTION_AMMUNITION_POS (sfVector2f) { \
        350, 400\
    }

    #define DESCRIPTION_POTION_POS (sfVector2f) { \
        700, 400\
    }

    #define DESCRIPTION_APPLE_POS (sfVector2f) { \
        700, 300\
    }

    #define DESCRIPTION_TEA_POS (sfVector2f) { \
        250, 450\
    }

    #define DESCRIPTION_PIECE_POS (sfVector2f) { \
        500, 450\
    }

    #define DESCRIPTION_AMMUNITION_RECT (sfIntRect) { \
        0, 0, 325, 137\
    }

    #define DESCRIPTION_POTION_RECT (sfIntRect) { \
        0, 0, 222, 129\
    }

    #define DESCRIPTION_APPLE_RECT (sfIntRect) { \
        0, 0, 223, 128\
    }

    #define DESCRIPTION_TEA_RECT (sfIntRect) { \
        0, 0, 223, 128\
    }

    #define DESCRIPTION_PIECE_RECT (sfIntRect) { \
        0, 0, 369, 133\
    }

    #define TAB_DESCRIPTION_POS (sfVector2f []) { \
        DESCRIPTION_AMMUNITION_POS, \
        DESCRIPTION_POTION_POS, \
        DESCRIPTION_APPLE_POS, \
        DESCRIPTION_TEA_POS, \
        DESCRIPTION_PIECE_POS \
    }

    #define TAB_DESCRIPTION_RECT (sfIntRect []) { \
        DESCRIPTION_AMMUNITION_RECT, \
        DESCRIPTION_POTION_RECT, \
        DESCRIPTION_APPLE_RECT, \
        DESCRIPTION_TEA_RECT, \
        DESCRIPTION_PIECE_RECT \
    }

    #define TAB_TYPE_DESCRIPTION (type_sprite_t []) { \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue) \
    }

    #define RECT_DESCRIPTION (sfIntRect *[]){ \
        &DESCRIPTION_AMMUNITION_RECT, &DESCRIPTION_POTION_RECT, \
        &DESCRIPTION_APPLE_RECT, &DESCRIPTION_TEA_RECT, \
        &DESCRIPTION_PIECE_RECT, \
        NULL \
    }

void action_item1(info_game_t *info_);
void display_inventory(info_game_t *info_);

int play_inventory(info_game_t *info_);
inventory_t init_inventory(void);
void display_inventory(info_game_t *info_);
int press_kp_close_inventory(info_game_t *info_);
int press_kp_inventory(info_game_t *info_);
void increase_life(info_game_t *info_);

#endif