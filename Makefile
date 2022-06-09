##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

CC	=	gcc

FIGHT 		= 	src/fight/display_fight.c \
				src/fight/event_fight.c \
				src/fight/fight_actions.c \
				src/fight/init_fight.c \
				src/fight/play_fight.c \
				src/fight/begin_fight.c \
				src/fight/animation_fight.c \
				src/fight/fgt_action_3.c

HELP 		=	src/help/play_help.c

INVENTORY 	=	src/inventory/display_inventory.c \
				src/inventory/init_inventory.c \
				src/inventory/play_inventory.c \
				src/inventory/press_keypad_bag.c \
				src/inventory/increase_life.c

MAP_VERTEX 	=	src/function_map/recup_map.c

PLAY_WINDOW	=	src/play_window/play_menu.c \
				src/play_window/play_game.c \
				src/play_window/play_choice_perso.c \
				src/play_window/play_mini_map.c \
				src/play_window/play_cinematic.c

KEYPAD 		=	src/keypad/press_keypad.c \
				src/keypad/move_perso.c \
				src/keypad/verify_move_by_something.c

INIT_SRC	=	src/init/init_info_game.c \
				src/init/init_menu.c \
				src/init/init_game.c \
				src/init/init_map.c \
				src/init/init_choice_perso.c \
				src/init/init_cine.c

ACTION 		= 	src/action/change_rect_obj.c \
				src/action/change_pos_sprite.c \
				src/action/sprite_is_next_to_sprite.c \
				src/action/can_interact.c \
				src/action/move_rect_pnj.c \
				src/action/interact_with_obj.c \
				src/action/put_obj_in_inventory.c

TIME 		= 	src/time/have_good_time.c

CREAT_SRC	=	src/creat_object/crea_tab_sprite.c \
				src/creat_object/creat_background.c \
				src/creat_object/creat_clock.c \
				src/creat_object/creat_sprite.c \
				src/creat_object/creat_tab_texture.c \
				src/creat_object/creat_text.c \
				src/creat_object/creat_type_sprite.c \
				src/creat_object/creat_window.c \
				src/creat_object/create_circle.c \
				src/creat_object/creat_button.c \
				src/creat_object/creat_obj.c \
				src/creat_object/creat_tab_rect.c \
				src/creat_object/creat_player.c \
				src/creat_object/creat_stat.c \
				src/creat_object/creat_view.c \
				src/creat_object/creat_info_text.c \
				src/creat_object/creat_triple_char.c \
				src/creat_object/creat_pnj.c

MAIN 	=	main.c \
			src/display/display_element.c \
			src/display/display_tab_element.c \
			src/display/change_center_view.c \
			src/display/display_button.c \
			src/inventory/display_description.c \
			src/free/free_struct.c \
			src/count_sprite.c \
			my_rpg.c \
			$(CREAT_SRC) \
			$(KEYPAD) \
			$(INIT_SRC) \
			$(PLAY_WINDOW) \
			$(TIME) \
			$(ACTION) \
			$(MAP_VERTEX) \
			$(INVENTORY) \
			$(FIGHT) \
			$(HELP) \
			src/end/play_end.c \
			src/button/is_in_button.c \
			src/button/change_enum.c \
			src/button/pass_in_button.c \
			src/button/do_nothing.c \
			src/button/go_to_game_and_choice_perso.c

SRC	    =	$(MAIN)

OBJ 	= 	$(SRC:.c=.o)

IFLAGS	=	-I ./include -I ./src/lib/include

LDFLAGS =	-lcsfml-graphics -lcsfml-system -lcsfml-audio \
			-lcsfml-window -lm -L ./src/lib -lmy

LIB_MATHFLAGS = -L/usr/lib/x86_64-linux-gnu -lm

CFLAGS 	=	-W -Wall -Wextra -Werror -g3 $(IFLAGS)

OBJ_TEST=	$(SRC_TEST:.c=.o)

TFLAGS	= 	$(CFLAGS) -lcriterion --coverage

NAME 	=	my_rpg

all: $(NAME)

liball:
	make -C ./src/lib all

libclean:
	make -C ./src/lib clean

libfclean:
	make -C ./src/lib fclean

libre:
	make -C ./src/lib re

$(NAME): $(OBJ) liball
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:  libclean
	rm -f $(OBJ)

fclean: libfclean
	rm -f $(NAME)
	rm -f $(OBJ)

re: fclean libre all

test_run: $(OBJ_TEST)
	gcc -o unit_test $(OBJ_TEST) $(TFLAGS)
