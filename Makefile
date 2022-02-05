##
## EPITECH PROJECT, 2021
## MY_LS
## File description:
## No file there , just an epitech header example
##

MAIN = src/main.c

SRC = src/game/game.c \
	  src/game/steps/global.c \
	  src/game/steps/step_0.c \
	  src/game/display/img/step_0.c \
	  src/game/display/buttons.c \
	  src/game/actions/buttons.c \
	  src/events/poll_events.c \
	  src/events/mouse_pressed_event.c \
	  src/events/close_event.c \
	  src/events/hovered/hover.c \
	  src/events/click/buttons.c \
	  src/setup/game.c \
	  src/setup/buttons/global.c \
	  src/setup/buttons/hovered_button.c \
	  src/setup/img/global.c \
	  src/setup/img/classic_img.c \
	  src/setup/img/anim_img.c \
	  src/setup/window.c \
	  src/setup/cursor.c \
	  src/utils/texts/best.c \
	  src/utils/texts/score.c \
	  src/utils/animations/button.c \
	  src/utils/best.c \
	  src/utils/quit.c \
	  src/utils/cursor.c \
	  src/utils/steps.c \

TESTS =

OBJ = $(MAIN:.c=.o) $(SRC:.c=.o)

NAME = my_defender
SRC_LIB = -Llib -lmy
CFLAGS += -Wextra -Iinclude -g3
C_SFML = -l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(OBJ) $(SRC_LIB) $(C_SFML) -o./$(NAME) -g3

all: $(NAME)

fclean:
	cd lib/my && make fclean
	make clean
	rm -f $(NAME)
	rm -f u

clean:
	rm -f src/*.o
	rm -f src/utils/*.o
	rm -f src/utils/texts/*.o
	rm -f src/utils/animations/*.o
	rm -f src/game/*.o
	rm -f src/game/display/img/*.o
	rm -f src/game/display/*.o
	rm -f src/game/steps/*.o
	rm -f src/game/actions/*.o
	rm -f src/clocks/*.o
	rm -f src/setup/*.o
	rm -f src/setup/buttons/*.o
	rm -f src/setup/img/*.o
	rm -f src/events/*.o
	rm -f src/events/keys/*.o
	rm -f src/events/click/*.o
	rm -f src/events/hovered/*.o
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.c.gcov

re:
	make fclean
	make

tests_run:
	gcc $(SRC) $(TESTS_SRC) $(SRC_LIB) $(CFLAGS) -lcriterion -o./u --coverage
	./unit-tests

debug:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g

valgrind:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g3
	valgrind ./$(NAME)

gdb:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g
	gdb ./$(NAME)
