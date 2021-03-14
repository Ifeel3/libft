NAME	=	libft.a

NORM	=	~/.norminette/norminette.rb

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

SRC_DIR	=	srcs

HEADER	=	libft.h

MEM	=	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c

STR	=	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c

SRCS	+=	$(MEM) \
		$(STR)

OBJS	=	$(SRCS:%.c=%.o)

.PHONY: all clean fclean re test norm

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

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
	$(NORM) $(HEADER)
