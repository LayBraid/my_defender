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
	  $(wildcard src/clocks/*.c) \
	  $(wildcard src/game/steps/*.c) \
	  $(wildcard src/game/buildings/flying/*.c) \
	  $(wildcard src/game/buildings/earthly/*.c) \
	  $(wildcard src/game/display/*.c) \
	  $(wildcard src/game/rounds/*.c) \
	  $(wildcard src/game/display/buildings/*.c) \
	  $(wildcard src/game/display/enemies/*.c) \
	  $(wildcard src/game/enemies/*.c) \
	  $(wildcard src/game/enemies/clocks/*.c) \
	  $(wildcard src/game/enemies/clocks/hits/*.c) \
	  $(wildcard src/game/enemies/clocks/movements/*.c) \
	  $(wildcard src/game/actions/*.c) \
	  $(wildcard src/utils/*.c) \
	  $(wildcard src/utils/animations/*.c) \
	  $(wildcard src/utils/texts/*.c) \
	  $(wildcard src/events/*.c) \
	  $(wildcard src/events/buttons/*.c) \
	  $(wildcard src/events/keys/*.c) \
	  $(wildcard src/game/laser/*.c) \
	  $(wildcard src/game/roads/*.c) \
	  $(wildcard src/game/roads/array/*.c) \
	  $(wildcard src/game/roads/logs/*.c) \
	  $(wildcard src/game/roads/solver/*.c) \

TESTS =

OBJ = $(MAIN:.c=.o) $(SRC:.c=.o)

NAME = my_defender
SRC_LIB = -Llib -lmy
CFLAGS += -Wextra -Iinclude -g3
C_SFML = -l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(OBJ) $(SRC_LIB) $(C_SFML) -o./$(NAME) -g3

.PHONY: all
all: $(NAME)

.PHONY: fclean
fclean:
	cd lib/my && make fclean
	make clean
	rm -f $(NAME)
	rm -f u

.PHONY: clean
clean:
	rm -f src/*.o
	rm -f src/utils/*.o
	rm -f src/utils/texts/*.o
	rm -f src/utils/animations/*.o
	rm -f src/game/*.o
	rm -f src/game/display/img/*.o
	rm -f src/game/display/buildings/*.o
	rm -f src/game/display/enemies/*.o
	rm -f src/game/display/*.o
	rm -f src/game/steps/*.o
	rm -f src/game/laser/*.o
	rm -f src/game/rounds/*.o
	rm -f src/game/actions/*.o
	rm -f src/game/enemies/*.o
	rm -f src/game/enemies/clocks/*.o
	rm -f src/game/enemies/clocks/hits/*.o
	rm -f src/game/enemies/clocks/movements/*.o
	rm -f src/game/buildings/*.o
	rm -f src/game/buildings/earthly/*.o
	rm -f src/game/buildings/flying/*.o
	rm -f src/game/roads/*.o
	rm -f src/game/roads/logs/*.o
	rm -f src/game/roads/array/*.o
	rm -f src/game/roads/solver/*.o
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

.PHONY: re
re:
	make fclean
	make

.PHONY: tests_run
tests_run:
	gcc $(SRC) $(TESTS_SRC) $(SRC_LIB) $(CFLAGS) -lcriterion -o./u --coverage
	./unit-tests

.PHONY: debug
debug:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g

.PHONY: valgrind
valgrind:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g3
	valgrind ./$(NAME)

.PHONY: gdb
gdb:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g
	gdb ./$(NAME)
