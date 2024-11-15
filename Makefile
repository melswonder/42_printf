CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_decimal.c ft_hexadecimal_low.c ft_hexadecimal_uppercase.c ft_pointer.c\
		ft_printf.c ft_putchar.c ft_search.c ft_string.c ft_unsigned_decimal.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re