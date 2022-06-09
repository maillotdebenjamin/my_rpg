/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** pnj.h
*/
#ifndef PNJ_H_
    #define PNJ_H_
    #include "my_rpg.h"
    #include "window_fight.h"

    #define PNJ_ONE "image/mob_1.png"
    #define PNJ_TWO "image/mob_two.png"
    #define PNJ_THREE "image/image_simple.png"
    #define MOB_ONE "image/mob.png"
    #define MOB_TWO "image/shroud.png"
    #define MOB_THREE "image/slime1.png"
    #define MOB_FOUR "image/slime2.png"
    #define ELEMENT_ONE "image/potion_1.png"
    #define ELEMENT_TWO "image/pommes.png"
    #define ELEMENT_THREE "image/boisson_vie.png"
    #define PNJ_TAB (char *[]) { \
        PNJ_ONE, \
        PNJ_TWO, \
        PNJ_THREE, \
        MOB_ONE, \
        MOB_TWO, \
        MOB_THREE, \
        MOB_FOUR, \
        ELEMENT_ONE, \
        ELEMENT_TWO, \
        ELEMENT_THREE, \
        NULL \
    }

    #define LEN_IMAGE_PNJ_ONE (sfVector2i) { \
        90, \
        195 \
    }
    #define LEN_IMAGE_PNJ_TWO (sfVector2i) { \
        200, \
        160 \
    }
    #define LEN_IMAGE_PNJ_THREE (sfVector2i) { \
        200, \
        160 \
    }
    #define LEN_IMAGE_MOB_ONE (sfVector2i) { \
        200, \
        160 \
    }
    #define LEN_IMAGE_MOB_TWO (sfVector2i) { \
        200, \
        160 \
    }
    #define LEN_IMAGE_MOB_THREE (sfVector2i) { \
        200, \
        160 \
    }
    #define LEN_IMAGE_MOB_FOUR (sfVector2i) { \
        200, \
        160 \
    }

    #define PNJ_ONE_POS (sfVector2f) { \
        200, 200 \
    }
    #define PNJ_TWO_POS (sfVector2f) { \
        700, 600 \
    }
    #define PNJ_THREE_POS (sfVector2f) { \
        185, 900 \
    }
    #define MOB_ONE_POS (sfVector2f) { \
        920, 600 \
    }
    #define MOB_TWO_POS (sfVector2f) { \
        1050, 750 \
    }
    #define MOB_THREE_POS (sfVector2f) { \
        275, 600 \
    }
    #define MOB_FOUR_POS (sfVector2f) { \
        850, 1000 \
    }
    #define ELEMENT_ONE_POS (sfVector2f) { \
        1100, 750 \
    }
    #define ELEMENT_TWO_POS (sfVector2f) { \
        85, 1120 \
    }
    #define ELEMENT_THREE_POS (sfVector2f) { \
        1000, 1100 \
    }
    #define PNJ_TAB_POS (sfVector2f []) { \
        PNJ_ONE_POS, \
        PNJ_TWO_POS, \
        PNJ_THREE_POS, \
        MOB_ONE_POS, \
        MOB_TWO_POS, \
        MOB_THREE_POS, \
        MOB_FOUR_POS, \
        ELEMENT_ONE_POS, \
        ELEMENT_TWO_POS, \
        ELEMENT_THREE_POS, \
    }

    #define PNJ_ONE_RECT (sfIntRect) { \
        0, 0, LEN_IMAGE_PNJ_ONE.x / 3,  LEN_IMAGE_PNJ_ONE.y / 4\
    }
    #define PNJ_TWO_RECT (sfIntRect) { \
        0, 0, LEN_IMAGE_PNJ_TWO.x / 3,  LEN_IMAGE_PNJ_TWO.y / 4\
    }
    #define PNJ_THREE_RECT (sfIntRect) { \
        0, 0, 1, 1\
    }
    #define MOB_ONE_RECT (sfIntRect) { \
        0, 0, 175, 123\
    }
    #define MOB_TWO_RECT (sfIntRect) { \
        0, 0, 113, 120\
    }
    #define MOB_THREE_RECT (sfIntRect) { \
        0, 0, 116, 120 \
    }
    #define MOB_FOUR_RECT (sfIntRect) { \
        0, 0, 128, 120 \
    }
    #define ELEMENT_ONE_RECT (sfIntRect) { \
        0, 0, LEN_IMAGE_PNJ_THREE.x / 3,  LEN_IMAGE_PNJ_THREE.y / 4\
    }
    #define ELEMENT_TWO_RECT (sfIntRect) { \
        0, 0, LEN_IMAGE_PNJ_THREE.x / 3,  LEN_IMAGE_PNJ_THREE.y / 4\
    }
    #define ELEMENT_THREE_RECT (sfIntRect) { \
        0, 0, LEN_IMAGE_PNJ_THREE.x / 3,  LEN_IMAGE_PNJ_THREE.y / 4\
    }
    #define PNJ_TAB_RECT (sfIntRect []) { \
        PNJ_ONE_RECT, \
        PNJ_TWO_RECT,\
        PNJ_THREE_RECT, \
        MOB_ONE_RECT, \
        MOB_TWO_RECT, \
        MOB_THREE_RECT, \
        MOB_FOUR_RECT, \
        ELEMENT_ONE_RECT, \
        ELEMENT_TWO_RECT, \
        ELEMENT_THREE_RECT \
    }

    #define PNJ_TAB_TYPE (type_sprite_t []) { \
        creat_type_sprite(type_pnj, sfTrue), \
        creat_type_sprite(type_pnj, sfTrue), \
        creat_type_sprite(type_pnj, sfTrue), \
        creat_type_sprite(type_mob, sfTrue), \
        creat_type_sprite(type_mob, sfTrue), \
        creat_type_sprite(type_mob, sfTrue), \
        creat_type_sprite(type_mob, sfTrue), \
        creat_type_sprite(type_pnj, sfTrue), \
        creat_type_sprite(type_pnj, sfTrue), \
        creat_type_sprite(type_pnj, sfTrue) \
    }

    #define PNJ_TWO_TAB_RECT (int **[]) { \
        (int *[]) { \
            (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, 0, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            }\
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 * 3, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            }\
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 * 2, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            }\
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_PNJ_TWO.y / 5, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            }\
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            }\
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5 * 2, LEN_IMAGE_PNJ_TWO.y / 4, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            }\
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_PNJ_TWO.y / 5 * 2, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 * 2, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5 * 2, LEN_IMAGE_PNJ_TWO.y / 4 * 2, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_PNJ_TWO.y / 5 * 3, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 * 3, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_TWO.x / 5 * 2, LEN_IMAGE_PNJ_TWO.y / 4 * 3, \
                LEN_IMAGE_PNJ_TWO.x / 5, LEN_IMAGE_PNJ_TWO.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , NULL \
    }

    #define PNJ_ONE_TAB_RECT (int **[]) { \
        (int *[]) { \
            (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, 0, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 * 3, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 * 2, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_PNJ_ONE.y / 3, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3 * 2, LEN_IMAGE_PNJ_ONE.y / 4, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_PNJ_ONE.y / 3 * 2, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 * 2, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3 * 2, LEN_IMAGE_PNJ_ONE.y / 4 * 2, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , (int *[]) { \
            (int []) { \
                0, LEN_IMAGE_PNJ_ONE.y / 3 * 3, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 * 3, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                LEN_IMAGE_PNJ_ONE.x / 3 * 2, LEN_IMAGE_PNJ_ONE.y / 4 * 3, \
                LEN_IMAGE_PNJ_ONE.x / 3, LEN_IMAGE_PNJ_ONE.y / 4 \
            } \
            , (int []) { \
                -1, -1, -1, -1 \
            } \
        } \
        , NULL \
    }

    #define MOB_ONE_TAB_RECT (int **[]) { \
        (int *[]) { \
            (int []) { \
                0, 0, 175, 123 \
            } \
            , (int []) { \
                LEN_MOB.x / 4 , 0, 175, 123 \
            } \
            , (int []) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), 0, 175, 120 \
            } \
            , (int []) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), 0, 175, 120 \
            } \
            , (int []) { \
                0, LEN_MOB.y / 5, 175, 120 \
            } \
            , (int []) { \
                LEN_MOB.x / 4 , LEN_MOB.y / 5, 175, 120 \
            } \
            , (int[]) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)),\
                LEN_MOB.y / 5, 175, 120 \
            } \
            , (int[]) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), \
                LEN_MOB.y / 5, 175, 120 \
            } \
            , (int []) { \
                0, (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 1)), 175, 120 \
            } \
            , (int []) { \
                LEN_MOB.x / 4 , (LEN_MOB.y / 5 + \
                (LEN_MOB.y / 5 * 1)), 175, 120 \
            } \
            , (int []) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), \
                (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 1)), 175, 120 \
            } \
            , (int []) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), \
                (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 1)), 175, 120 \
            } \
            , (int []) { \
                0, (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 2)), 175, 120 \
            } \
            , (int []) { \
                LEN_MOB.x / 4 , (LEN_MOB.y / 5 + \
                (LEN_MOB.y / 5 * 2)), 175, 120 \
            } \
            , (int []) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 1)), \
                (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 2)), 175, 120 \
            } \
            , (int []) { \
                (LEN_MOB.x / 4 + (LEN_MOB.x / 4 * 2)), \
                (LEN_MOB.y / 5 + (LEN_MOB.y / 5 * 2)), 175, 120 \
            } \
            , (int []) { \
                -1, -1, -1, -1\
            }\
        } \
        , NULL \
    }

    #define MOB_TWO_TAB_RECT (int **[]) { \
        (int *[]) { \
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
        } \
        , NULL \
    }

    #define MOB_THREE_TAB_RECT (int **[]) { \
        (int *[]) { \
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
        } \
        , NULL \
    }

    #define MOB_FOUR_TAB_RECT (int **[]) { \
        (int *[]) { \
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
        } \
        , NULL \
    }

    #define PNJ_TAB_MOVE_RECT (sfIntRect **[]) { \
        creat_triple_tab_rect(PNJ_ONE_TAB_RECT), \
        creat_triple_tab_rect(PNJ_TWO_TAB_RECT), \
        NULL, \
        creat_triple_tab_rect(MOB_ONE_TAB_RECT), \
        creat_triple_tab_rect(MOB_TWO_TAB_RECT), \
        creat_triple_tab_rect(MOB_THREE_TAB_RECT), \
        creat_triple_tab_rect(MOB_FOUR_TAB_RECT), \
        NULL, \
        NULL, \
        NULL \
    }

    #define PNJ_TAB_TALK (char ***[]) { \
        creat_triple_char("src/config_text_mob_one", 1), \
        creat_triple_char("src/config_talk_mob_3", 1), \
        creat_triple_char("src/config_talk_mob_3", 1), \
        NULL, \
        NULL, \
        NULL, \
        NULL, \
        NULL, \
        NULL, \
        NULL, \
    }

    #define PNJ_TAB_FUNCTION (void (*[])(struct info_game *)) { \
        NULL, \
        &play_end, \
        &play_mini_map, \
        &begin_fight_mob_one, \
        &begin_fight_mob_two, \
        &begin_fight_mob_three, \
        &begin_fight_mob_four, \
        &put_life_in_inventory, \
        &put_apple_in_inventory, \
        &put_tea_in_inventory \
    }

#endif