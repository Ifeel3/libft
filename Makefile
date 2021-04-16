NAME	=	libft.a

NORM	=	norminette

CC	=	gcc

FLAGS	=	-Wall -Werror -Wextra

CFLAGS	=	$(FLAGS) -I.

SRC_DIR	=	srcs

HEADER	=	libft.h

MEM	=	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c

STR	=	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c

SCH	=	ft_atoi.c \
		ft_toupper.c \
		ft_tolower.c

CHECKERS=	ft_isdigit.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_isascii.c

SRCS	+=	$(MEM) \
		$(STR) \
		$(SCH) \
		$(CHECKERS)

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
	$(CC) $(FLAGS) -o test tester.c -L. -lft

norm:
	$(NORM) -R CheckForbiddenSourceHeader $(SRCS)
	$(NORM) $(HEADER)
