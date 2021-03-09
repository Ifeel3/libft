NAME	=	libft.a

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

SRC_DIR	=	srcs

MEM_DIR	=	$(SRC_DIR)/mem

MEM	=	$(MEM_DIR)/ft_memset.c \
		$(MEM_DIR)/ft_bzero.c \
		$(MEM_DIR)/ft_memcpy.c \
		$(MEM_DIR)/ft_memmove.c

SRCS	+=	$(MEM)

OBJS	=	$(SRCS:%.c=%.o)

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f test

re: fclean all

test:
	rm -f test
	$(CC) $(CFLAGS) -o test main.c -L. -lft

