##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##
CC	=	gcc

SRC	    =	my_getnbr.c \
			my_is_in_str.c \
			return_bigger_str.c \
			my_rev_str.c \
			my_revstr_static.c \
			my_str_cmp.c \
			my_str_to_word_array.c \
			my_strcat_static.c \
			my_strcpy.c \
			my_strdup.c \
			my_strlen_up_to_str.c \
			my_strlen_up_up_char.c \
			my_str_char_cmp.c \
			my_strncpy.c \
			nb_change_to_str.c \
			return_first_word_static.c \
			return_first_word.c \
			return_str_whithout_str.c \
			sort_word_str.c \
			my_strlen.c \
			array/my_array_len.c \
			array/my_copy_array.c \
			my_strcat_char_in_mid.c \
			my_is_number.c \
			array/print_array.c \
			file/open_file.c \
			file/open_read.c \
			my_strcat.c

SRC_TEST=	./tests/test_printf.c \
			$(SRC)

OBJ 	= 	$(SRC:.c=.o)

IFLAGS	=	-I ./include

LDFLAGS =	-L -lmy

WFLAGS  = 	-W -Wall -Wextra -Werror

CFLAGS 	=	$(IFLAGS) $(LDFLAGS) $(WFLAGS)

OBJ_TEST=	$(SRC_TEST:.c=.o)

TFLAGS	= 	$(CFLAGS) -lcriterion --coverage

NAME 	=	libmy.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f *.gcda
	rm -f *.gcno

re : fclean all

unit_tests : fclean all
	gcc -o unit_test $(SRC_TEST) $(TFLAGS)

test_run : 	unit_tests
	./unit_test