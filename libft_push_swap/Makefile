NAME = libft.a
LIB = .
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlcpy.c \
			ft_atoi.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_putnbr_fd.c \
			ft_itoa.c \
			ft_putendl_fd.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_split.c \
			ft_strlcat.c \

BON = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \

		

OBJ = ${SOURCES:.c=.o}
BONUS_OBJ = ${BON:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@

bonus: .bonus

.bonus: ${BONUS_OBJ}
	ar rc $(NAME) $(BONUS_OBJ)
	@touch .bonus

clean:
	rm -rf $(OBJ) $(BONUS_OBJ)
	@rm  -rf .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re