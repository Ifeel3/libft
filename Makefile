NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra

CFLAGS	= $(FLAGS) -I.

CC		= gcc

NORMIN	= norminette

HEADER	+= libft.h \
		libft_bonus.h

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
		ft_memcmp.c \
		ft_memrchr.c

STR		+= ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c

OTHR	+= ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_atoi.c

SRCS	+= $(CHK) \
		$(OTHR) \
		$(MEM) \
		$(STR)

BONUS	+= ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c

BOBJS	= $(BONUS:%.c=%.o)

OBJS	= $(SRCS:%.c=%.o)

.PHONY: all clean fclean re norm bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

bonus: $(BOBJS)
	ar rc $(NAME) $(BOBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(BOBJS)

fclean: clean
	rm -f $(NAME)

norm:
	$(NORMIN) -R CheckForbiddenSourceHeader $(SRCS)
	$(NORMIN) -R CheckForbiddenSourceHeader $(BONUS)
	$(NORMIN) $(HEADER)

re: fclean all