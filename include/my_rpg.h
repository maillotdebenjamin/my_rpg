/*
** EPITECH PROJECT, 2021
** screen_saver.h
** File description:
** printf.h
*/
#ifndef MY_RPG_H_
    #define MY_RPG_H_
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <unistd.h>

    #define LEN_WINDOW_X 1200
    #define LEN_WINDOW_Y 800

    #define NB_OF_MAP 3
    #define NB_BUTTON_CHOICE_MAP 4
    #define NB_BUTTON_MENU 2

    #define WAIT_TO_CLICK 500000
    #define V2F(x, y) (sfVector2f){x, y}
    #define V2I(x, y) (sfVector2i){x, y}
    #define RECT_F(left, top, width, height) \
    (sfFloatRect){left, top, width, height}
    #define LEN_PERSO info_->game.perso->my_sprite->len
    #define POS_PERSO info_->game.perso->my_sprite->position
    #define RECT_I(left, top, width, height) \
    (sfIntRect){left, top, width, height}

    #define PERSO info_->game.perso
    #define TAB_TEXT_PERSO info_->game.perso->text.tab
    #define Y_TEXT_PERSO info_->game.perso->text.index_y
    #define X_TEXT_PERSO info_->game.perso->text.index_x
    #define TAB_TEXT_PNJ info_->game.choice_pnj->text.tab
    #define Y_TEXT_PNJ info_->game.choice_pnj->text.index_y
    #define X_TEXT_PNJ info_->game.choice_pnj->text.index_x

    typedef enum who_talk {
        ONE,
        TWO
    }who_talk_e;

    typedef enum is_good {
        YES,
        NO
    }is_good_e;

    typedef enum statu {
        end,
        help,
        mini_map,
        lose_game,
        inventory,
        fight,
        win,
        quit,
        menu,
        tuto,
        pause_game,
        choice_perso,
        choice_level,
        choice_to_quit,
        settings,
        game,
        cine
    } statu_e;

    typedef enum statu_button {
        hover,
        click,
        not,
    } statu_button_e;

    typedef enum statu_move {
        down,
        left,
        right,
        up,
        stop
    } statu_move_e;

    typedef enum name_type_sprite {
        type_player_fight,
        type_mob,
        type_planet,
        type_enemies_fight,
        type_background,
        type_player,
        type_next_to_perso,
        type_pnj,
        type_obj,
        type_obj_static,
        type_obj_logo,
        type_click_in_spell,
        type_enemies,
        type_tower,
        type_button,
        type_button_fight,
        type_button_map,
    } name_type_sprite_e;

    typedef struct move {
        statu_move_e statu;
        float x;
        float y;
    } move_t;

    typedef struct type_sprite {
        name_type_sprite_e name;
        sfBool open;
    } type_sprite_t;

    typedef struct sprite {
        sfTexture *texture;
        sfVector2f position;
        sfSprite *sprite;
        sfIntRect rect;
        sfCircleShape *circl;
        sfVector2i len;
        type_sprite_t type;
        char *name;
    } sprite_t;

    typedef struct window {
        sfRenderWindow *window;
        sfVideoMode mode;
        sfKeyEvent key_event;
        sfEvent event;
    } window_t;

    typedef struct time_clock {
        sfTime time;
        sfClock *clock;
        sfTime touch_button;
    } time_clock_t;

    typedef struct text {
        sfText *text;
        int score;
        time_clock_t *time;
    } text_t;

    typedef struct text_perso {
        sfText *text;
        char **tab_text;
    } text_perso_t;

    typedef struct background {
        int name;
        float speed;
        sprite_t *sprite;
    } background_t;

    typedef struct circle {
        sfCircleShape *circle;
        sfVector2f pos;
        time_clock_t time;
        sfVector2f len;
        sfBool open;
    } circle_t;

    typedef struct info_game info_game_t;

    typedef struct button {
        statu_button_e statu;
        sfIntRect click_rect;
        sfIntRect pass_rect;
        void (*ptr)(struct info_game *);
        sprite_t *my_sprite;
    } button_t;

    typedef enum animation_vs {
        not_done,
        done,
    } anim_vs_e;

    typedef struct obj {
        int index;
        time_clock_t *my_clock;
        sprite_t *my_sprite;
        sfIntRect *tab;
    } obj_t;

    typedef enum statu_mob_fight {
    stand,
    shooted,
    die,
    } statu_mobfight_e;

    typedef struct fight {
        background_t **bg;
        background_t *bg_now;
        background_t *blur;
        obj_t **players;
        button_t **buttons;
        int life_player1;
        int dam_player1;
        int life_mob;
        int dam_mob;
        int map_index;
        int mob_index;
        anim_vs_e anim_vs;
        anim_vs_e animation;
        statu_mobfight_e statu_mob;
    } fight_t;

    typedef struct menu {
        button_t **button;
        background_t *background;
        obj_t **element;
    } menu_t;

    typedef struct info_text {
        sfText *text;
        char ***tab;
        int index_x;
        int index_y;
    } info_text_t;

    typedef struct player {
        int index_rect;
        int index_move_rect;
        info_text_t text;
        sprite_t *my_sprite;
        sfIntRect **rect_move;
        move_t move;
        time_clock_t *my_clock;
        sprite_t *obj_player;
    } player_t;

        typedef struct pnj {
        int index_rect;
        int index_move_rect;
        info_text_t text;
        sprite_t *my_sprite;
        sfIntRect **rect_move;
        time_clock_t *my_clock;
        void (*ptr)(struct info_game *);
    } pnj_t;

    typedef struct cine {
        background_t *sprite_back;
        sprite_t *ship;
    }cine_t;

    typedef struct choice_perso {
        button_t **button;
    } choice_perso_t;

    typedef struct inventory {
        background_t *background;
        obj_t **items;
        int potion_life;
        int munitions;
        int apple;
        int tea;
        int piece;
        obj_t **description;
    } inventory_t;

    typedef struct game {
        text_t level;
        background_t *help;
        is_good_e is_fight;
        text_t text_help;
        is_good_e talk;
        who_talk_e who;
        sfRectangleShape *rect_shape;
        pnj_t *choice_pnj;
        sprite_t **tab_sprite;
        pnj_t **pnj;
        player_t *perso;
        sfVertexArray *tab_flor;
        sfVertexArray *tab_hauteur;
        sfVertexArray *tab_hauteur_2;
        sfVertexArray *tab_passage;
        sfView *view;
        double time_key;
    } game_t;

    struct info_game {
        sfMusic *music;
        cine_t cine;
        time_clock_t *my_clock;
        sfBool is_in_something;
        inventory_t inventory;
        menu_t menu;
        game_t game;
        choice_perso_t choice_perso;
        window_t *my_window;
        sfVector2i mouse;
        statu_e statu;
        time_clock_t *time;
        sfRenderStates states;
        fight_t fight;
    };

int my_rpg(info_game_t *info_);

void wait_one_sec(info_game_t *info_, float add);

char *nb_change_to_str(int nb);
int my_array_sprite(sprite_t **tab_sprite);

info_game_t *init_info(void);
button_t **init_tab_button(sprite_t **tab_sprite);
choice_perso_t init_choice_perso(void);
void init_map(info_game_t *info_, game_t *game);
cine_t init_cine(void);

window_t *create_window(int x, int y);
background_t *create_bacground(sprite_t *sprite);
sprite_t *create_sprite(
char *filepath, sfVector2f position, sfIntRect rect, type_sprite_t type);
time_clock_t *create_clock(void);
sprite_t **create_tab_sprite(
char **filepath, sfVector2f *tab_pos, sfIntRect *rect, type_sprite_t[]);
type_sprite_t creat_type_sprite(name_type_sprite_e name, sfBool open);
sfCircleShape *creat_circle(sfVector2f pos, float radius, sfColor color);
sfTexture **create_tab_texture(char **paths);
circle_t creat_circle_spell(sfVector2f pos, float radius, sfColor color);
text_t creat_text(char *filepath, sfVector2f pos, int size, sfColor color);
button_t **creat_tab_button(
sprite_t **tab_sprite, void (**ptr)(struct info_game *), sfIntRect *tab_rect,
sfIntRect *tab_rect_pass);
obj_t **creat_tab_obj(sprite_t **sprite, sfIntRect **tab);
int play_menu(info_game_t *info_);
void play_mini_map(info_game_t *info_);
sfIntRect *creat_tab_rect(int **nb);
sfIntRect **creat_triple_tab_rect(int ***nb);
player_t **creat_tab_player(sprite_t **sprite, sfIntRect ***tab_rect
, char ****tab_word);
player_t *creat_player(sprite_t *sprite, sfIntRect **tab_rect,
sprite_t *obj_player, char ***tab);
sfView *creat_view(info_game_t *info_);
info_text_t creat_info_text(char ***tab, char *filepath,
sfColor color);
sfRectangleShape *creat_rectangle(sfVector2f pos, sfColor color,
sfVector2f size);
char ***creat_triple_char(char *fileptah, int len);
pnj_t **creat_tab_pnj(sprite_t **sprite, sfIntRect ***tab_rect,
char ****tab_word, void (**ptr)(struct info_game *));

void is_in_sprite(
info_game_t *info_, sprite_t *sprite, void (*ptr)(info_game_t *info_));
int perso_have_good_time(info_game_t *info_, player_t **perso, double speed);
void change_size_sprite(sprite_t *sprite, sfVector2f vector);
void is_in_button(info_game_t *info_, button_t *button);
void restart_size(sprite_t *sprite, sfVector2f power);
void change_rect_sprite(sprite_t *sprite, sfIntRect rect);
void go_to_quit(info_game_t *info_);
void go_to_game(info_game_t *info_);
void go_to_choice_perso(info_game_t *info_);
void do_nothing(info_game_t *info_);
void go_to_game_and_choice_perso(info_game_t *info_);

int have_good_time(info_game_t *info_, obj_t *obj, double speed);
void change_rect_obj(info_game_t *info_, obj_t *obj);
void change_gravity_ship_menu(info_game_t *info_, obj_t *obj);

void display_one_sprite(info_game_t *info_, sprite_t *my_sprite);
void display_backround(info_game_t *info_, background_t *back);
void display_tab_sprite(info_game_t *info_, sprite_t **tab);
void display_rectangle(info_game_t *info_, sfRectangleShape *rect);
void display_text(info_game_t *info_, sfText *text);
void display_tab_button(info_game_t *info_, button_t **tab);
void display_tab_obj(info_game_t *info_, obj_t **tab);
void display_tab_pnj(info_game_t *info_, pnj_t **tab);
void display_player(info_game_t *info_, player_t *player);
void display_the_talk(info_game_t *info_);
void display_one_button(info_game_t *info_, button_t *button);
void put_description(info_game_t *info_, obj_t **description);
void display_sprite_at_one_coord(info_game_t *info_, sprite_t *sprite,
sfVector2f pos);
int change_center_view(info_game_t *info_);

void display_menu(info_game_t *info_);
int play_help(info_game_t *info_);

int interact_with_obj(info_game_t *info_);
int count_sprite(sprite_t **sprite);
int change_pos_text(info_game_t *info_, sfText **text, float add);
int change_pos_life_bar(info_game_t *info_, sprite_t *sprite);
int pnj_have_good_time(info_game_t *info_, pnj_t **perso, double speed);

void free_struct(info_game_t *info_);

sfVertexArray *complete_vertex(info_game_t *info_, char *buffer);
sfRenderStates creat_stat(char *filepath);

int play_cine(info_game_t *info_);
void play_end(info_game_t *info_);
#endif