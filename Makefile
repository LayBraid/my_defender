##
## EPITECH PROJECT, 2021
## MY_LS
## File description:
## No file there , just an epitech header example
##

MAIN = src/main.c

SRC = $(wildcard src/setup/*.c) \
	  $(wildcard src/setup/buttons/*.c) \
	  $(wildcard src/setup/img/*.c) \
	  $(wildcard src/game/*.c) \
	  $(wildcard src/game/steps/*.c) \
	  $(wildcard src/game/display/*.c) \
	  $(wildcard src/game/actions/*.c) \
	  $(wildcard src/utils/*.c) \
	  $(wildcard src/utils/animations/*.c) \
	  $(wildcard src/utils/texts/*.c) \
	  $(wildcard src/events/*.c) \
	  $(wildcard src/events/buttons/*.c) \
	  $(wildcard src/events/keys/*.c) \

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
	rm -f src/events/buttons/*.o
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
