NAME    = rush-02
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
SRCS    = main.c \
          ft_strlen.c \
          ft_strcpy.c \
          ft_strncmp.c \
          ft_trim.c \
          ft_read_line.c \
          ft_strutils.c \
          parse_dict.c \
          dict_utils.c \
          convert.c \
          convert_utils.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c rush02.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
