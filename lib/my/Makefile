##
## EPITECH PROJECT, 2021
## MY_LS
## File description:
## No file there , just an epitech header example
##

SRC = my_strlen.c \
	  my_str_contains_c.c \
	  my_strcat_c.c \
	  my_strcat.c \
	  my_strcpy.c \
	  my_strcmp.c \
	  my_rand.c \
	  my_isdigit.c \
	  my_int_len.c \
	  my_revstr.c \
	  my_convert_base.c \
	  my_itoa.c \
	  my_atoi.c \
	  my_str_lowcase.c \
	  my_str_upcase.c \
	  my_strncpy.c \
	  my_array_str_sort.c \
	  my_strdup.c \
	  my_str_isnumber.c

OBJ = $(SRC:.c=.o)

NAME = lib
CFLAGS += -Werror -Wextra -I./include

$(NAME): $(OBJ)
	ar rc libmy.a *.o
	cp libmy.a ../

all: $(NAME)

fclean:
	make clean
	rm -f ../../my.h
	rm -f ../libmy.a
	rm -f libmy.a

clean:
	rm -f *.o output

re:
	make fclean
	make
