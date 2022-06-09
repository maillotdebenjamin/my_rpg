/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** window_menu.h
*/
#ifndef WINDOW_MENU_H_
    #define WINDOW_MENU_H_
    #include "my_rpg.h"

    #define STAR_PIC "image/sapce_menu_1.jpg"
    #define LEN_IMAGE_BUTTON_MENU 750
    #define STAR_RECT (sfIntRect) {\
        0, 0, LEN_WINDOW_X, LEN_WINDOW_Y\
    }
    #define STAR_POS (sfVector2f) {\
        0, \
        0\
    }

    #define TAB_FILEPATH (char *[]) { \
        "image/button_menu.png", \
        "image/button_menu.png", \
        NULL,\
    }

    #define PLAY_RECT (sfIntRect) {\
        0, 0, 209, 73\
    }
    #define PLAY_POS (sfVector2f) {\
        LEN_WINDOW_X / 2 - PLAY_RECT.width / 2, \
        LEN_WINDOW_Y / 2 \
    }

    #define QUIT_RECT (sfIntRect) {\
        0, 353, 209, 73\
    }
    #define QUIT_POS (sfVector2f) {\
        LEN_WINDOW_X / 2 - QUIT_RECT.width / 2, \
        LEN_WINDOW_Y / 2 + 100\
    }

    #define TAB_RECT_BUTTON (sfIntRect []) {\
        PLAY_RECT, \
        QUIT_RECT\
    }
    #define TAB_POS_BUTTON (sfVector2f []) {\
        PLAY_POS, \
        QUIT_POS\
    }
    #define MENU_TAB_TYPE (type_sprite_t []) {\
    creat_type_sprite(type_button, sfTrue), \
    creat_type_sprite(type_button, sfTrue)\
    }
    #define TAB_BUTTON_RECT_MENU (sfIntRect []) { \
        { \
            LEN_IMAGE_BUTTON_MENU / 2.71, 0, 209, 73\
        }\
        , {\
            LEN_IMAGE_BUTTON_MENU / 2.71, 353, 209, 73\
        } \
    }
    #define TAB_BUTTON_CLICK_MENU (sfIntRect []) { \
        { \
            LEN_IMAGE_BUTTON_MENU / 1.40, 0, 209, 73\
        }\
        , {\
            LEN_IMAGE_BUTTON_MENU / 1.40, 353, 209, 73\
        } \
    }

    #define MENU_BUTTON_FUNC (void (*[])(struct info_game *)) { \
        &go_to_choice_perso, &go_to_quit, NULL \
    }

    #define LEN_MENU_PLANET (sfVector2i) { \
        105, 105 \
    }
    #define MENU_PLANET "image/menu_planet.png"
    #define MENU_PLANET_POS (sfVector2f) {\
        300, \
        200\
    }
    #define MENU_PLANET_RECT (sfIntRect) {\
        0, 0, LEN_MENU_PLANET.x, LEN_MENU_PLANET.y\
    }
    #define MENU_PLANET_DIFF_RECT (int *[]) {\
        (int []) {\
            0, 0, LEN_MENU_PLANET.x, LEN_MENU_PLANET.y\
        }\
    }

    #define LEN_MENU_SHIP (sfVector2i) { \
        577, 433 \
    }
    #define MENU_SHIP "image/ship_menu.png"
    #define MENU_SHIP_POS (sfVector2f) { \
        700, \
        360\
    }
    #define MENU_SHIP_RECT (sfIntRect) {\
        0, 0, LEN_MENU_SHIP.x, LEN_MENU_SHIP.y\
    }

    #define LEN_MENU_LOGO (sfVector2i) { \
        155, 158 \
    }
    #define MENU_LOGO "image/logo_lost_in_space.png"
    #define MENU_LOGO_RECT (sfIntRect) {\
        0, 0, LEN_MENU_LOGO.x, LEN_MENU_LOGO.y\
    }
    #define MENU_LOGO_POS (sfVector2f) { \
        LEN_WINDOW_X / 2 - MENU_LOGO_RECT.width / 2, \
        LEN_WINDOW_Y / 2 - 250\
    }

    #define MENU_OBJ_TAB (char *[]) { \
        MENU_PLANET, \
        MENU_SHIP, \
        MENU_LOGO, \
        NULL \
    }
    #define MENU_OBJ_TAB_RECT (sfIntRect []) {\
        MENU_PLANET_RECT, \
        MENU_SHIP_RECT, \
        MENU_LOGO_RECT \
    }
    #define MENU_TAB_POS_OBJ (sfVector2f []) {\
        MENU_PLANET_POS, \
        MENU_SHIP_POS, \
        MENU_LOGO_POS \
    }
    #define MENU_OBJ_TAB_TYPE (type_sprite_t []) { \
        creat_type_sprite(type_planet, sfTrue), \
        creat_type_sprite(type_obj_static, sfTrue), \
        creat_type_sprite(type_obj_logo, sfTrue) \
    }

    #define MENU_OBJ_TAB_MOVE_RECT (sfIntRect *[]){ \
        &MENU_PLANET_RECT, \
        &MENU_SHIP_RECT, \
        &MENU_LOGO_RECT, NULL \
    }

menu_t init_menu(void);

#endif