NAME	=	libft.a

NORM	=	~/.norminette/norminette.rb

CC	=	gcc

FLAGS	=	-Wall -Werror -Wextra

CFLAGS	=	$(FLAGS) -I headers

SRC_DIR	=	srcs

HEADER	=	libft.h

MEM_DIR	=	$(SRC_DIR)/mem

MEM	=	$(MEM_DIR)/ft_memset.c \
		$(MEM_DIR)/ft_bzero.c \
		$(MEM_DIR)/ft_memcpy.c \
		$(MEM_DIR)/ft_memmove.c \
		$(MEM_DIR)/ft_memccpy.c \
		$(MEM_DIR)/ft_memchr.c \
		$(MEM_DIR)/ft_memcmp.c

STR_DIR	=	$(SRC_DIR)/str

STR	=	$(STR_DIR)/ft_strlen.c

SRCS	+=	$(MEM) \
		$(STR)

OBJS	=	$(SRCS:%.c=%.o)

.PHONY: all clean fclean re test norm

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
	$(CC) $(CFLAGS) -o test tester.c -L. -lft

norm:
	$(NORM) -R CheckForbiddenSourceHeader $(SRCS)
	$(NORM) headers/$(HEADER)
