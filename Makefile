NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra

CFLAGS	= $(FLAGS) -I.

CC		= gcc

NORMIN	= norminette

HEADER	= libft.h

CHK		+= ft_isdigit.c \
		ft_islower.c \
		ft_isupper.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_isnotprint.c \
		ft_isascii.c

MEM		+= ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memrcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memccpy.c \
		ft_memcmp.c

OTHR	+= ft_toupper.c \
		ft_tolower.c

SRCS	+= $(CHK) \
		$(OTHR) \
		$(MEM)

OBJS	= $(SRCS:%.c=%.o)

.PHONY: all clean fclean re norm

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

norm:
	$(NORMIN) -R CheckForbiddenSourceHeader $(SRCS)
	$(NORMIN) $(HEADER)

re: fclean all