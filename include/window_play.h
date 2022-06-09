/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** window_play.h
*/
#ifndef WINDOW_PLAY_H_
    #define WINDOW_PLAY_H_
    #include "my_rpg.h"

    #define IMAGE_ASTRONAUT "image/astronaut(1).png"
    #define IMAGE_ASTRONAUT_2 "image/astronaut_marl.png"
    #define IMAGE_ASTRONAUT_TAB (char *[]) { \
        IMAGE_ASTRONAUT, \
        IMAGE_ASTRONAUT_2, \
        NULL \
    }

    #define ASTRONAUT_POS (sfVector2f) {\
        300 - (LEN_IMAGE_ASTRONAUT.x / 4) / 2,\
        200 - (LEN_IMAGE_ASTRONAUT.y / 4) / 2\
    }
    #define ASTRONAUT_POS_TAB (sfVector2f []) { \
        ASTRONAUT_POS, \
        ASTRONAUT_POS \
    }

    #define ASTRONAUT_RECT (sfIntRect) { \
        0, 0, LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
    }
    #define ASTRONAUT_RECT_TAB (sfIntRect []) { \
        ASTRONAUT_RECT, \
        ASTRONAUT_RECT \
    }

    #define ASTRONAUT_TAB_TYPE (type_sprite_t []) { \
        creat_type_sprite(type_player, sfTrue), \
        creat_type_sprite(type_player, sfTrue) \
    }

    #define LEN_IMAGE_ASTRONAUT (sfVector2i) { \
        128, \
        192 \
    }

    #define PLAYER_TAB_TRIPLE_RECT (int **[]) { \
        (int *[]) { \
            (int []) { \
                0, 0, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4, 0, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 2, 0, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 3, 0, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_ASTRONAUT.y / 4, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 2, LEN_IMAGE_ASTRONAUT.y / 4, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 3, LEN_IMAGE_ASTRONAUT.y / 4, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_ASTRONAUT.y / 4 * 2, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 * 2, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 2, LEN_IMAGE_ASTRONAUT.y / 4 * 2, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 3, LEN_IMAGE_ASTRONAUT.y / 4 * 2, \
                LEN_IMAGE_ASTRONAUT.x / 4 * 2, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_ASTRONAUT.y / 4 * 3, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 * 3, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 2, LEN_IMAGE_ASTRONAUT.y / 4 * 3, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_ASTRONAUT.x / 4 * 3, LEN_IMAGE_ASTRONAUT.y / 4 * 3, \
                LEN_IMAGE_ASTRONAUT.x / 4, LEN_IMAGE_ASTRONAUT.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } , \
        NULL \
    }

    #define CHOICE_PLAYER_ONE "image/choice_player_one.png"
    #define CHOICE_PLAYER_TWO "image/choice_player_two.png"

    #define TAB_CHOICE_PLAYER (char *[]) { \
        CHOICE_PLAYER_ONE, \
        CHOICE_PLAYER_TWO, \
        NULL \
    }

    #define CHOICE_PLAYER_ONE_POS (sfVector2f) { \
        100, 100 \
    }
    #define CHOICE_PLAYER_TWO_POS (sfVector2f) { \
        700, 100 \
    }
    #define CHOICE_PLAYER_TAB_POS (sfVector2f []) { \
        CHOICE_PLAYER_ONE_POS, \
        CHOICE_PLAYER_TWO_POS \
    }

    #define CHOICE_PLAYER_ONE_RECT (sfIntRect) { \
        0, 0, 400, 625 \
    }
    #define CHOICE_PLAYER_TWO_RECT (sfIntRect) { \
        0, 0, 400, 625 \
    }
    #define CHOICE_PLAYER_TAB_RECT (sfIntRect []) { \
        CHOICE_PLAYER_ONE_RECT, \
        CHOICE_PLAYER_TWO_RECT \
    }

    #define CHOICE_PLAYER_TAB_TYPE (type_sprite_t []) { \
        creat_type_sprite(type_button, sfTrue), \
        creat_type_sprite(type_button, sfTrue), \
        creat_type_sprite(type_button, sfTrue) \
    }
    #define CHOICE_PLAYER_TAB_CLICK (sfIntRect []) { \
        RECT_I(400, 0, 400, 625), \
        RECT_I(400, 0, 400, 625) \
    }
    #define CHOICE_PLAYER_TAB_PASS (sfIntRect []) { \
        RECT_I(800, 0, 400, 625), \
        RECT_I(800, 0, 400, 625) \
    }

    #define BANG "image/bang.png"
    #define BANG_POS (sfVector2f) { \
        0, 0\
    }
    #define BANG_RECT (sfIntRect) {\
        0, 0, 50, 50\
    }
    #define BANG_TYPE creat_type_sprite(type_obj, sfFalse)

int play_game(info_game_t *info_);
int play_choice_perso(info_game_t *info_);
game_t init_game(void);

int press_keypad(info_game_t *info_);
int move_perso(info_game_t *info_, sfVector2f vector_add,
int index_rect, statu_move_e statue);
int move_by_something(info_game_t *info_, player_t **perso, float x, float y);
int move_rect_pnj(info_game_t *info_);
int can_interact(info_game_t *info_);
int point_is_in_sprite(sprite_t *my_sprite, sfVector2f vector);
int sprite_is_next_to_sprite(info_game_t *info_,
sprite_t *my_sprite, sprite_t *dest, int add);
int change_pos_sprite(sprite_t **sprite, sfVector2f vector_add);

void put_life_in_inventory(info_game_t *info_);
void put_apple_in_inventory(info_game_t *info_);
void put_tea_in_inventory(info_game_t *info_);
#endif