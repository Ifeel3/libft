NAME	= libft.a
FLAGS	= -Wall -Werror -Wextra
CFLAGS	= $(FLAGS) -I.
CC		= gcc
NORMIN	= norminette
SRC		= $(wildcard src/*.c) \
		$(wildcard srcprintf/*.c)
OBJ		= $(SRC:%.c=%.o)

.PHONY: all clean fclean re norm

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $?
	ranlib $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	$(NORMIN) -R CheckForbiddenSourceHeader $(SRC)
	$(NORMIN) libft.h