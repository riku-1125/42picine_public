NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	ft_printf.c \
			ft_dispatch.c \
			ft_char_funcs.c \
			ft_digit_funcs.c \
			ft_hex_funcs.c \
			ft_putchar.c
OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: 
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
