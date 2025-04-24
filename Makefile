NAME = libftprintf.a
NAME_EXE = a.out

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS :=	ft_printf.c \
	ft_printchar.c \
	ft_printdec.c \
	ft_printhexa.c \
	ft_printint.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar crs $@ $^

$(NAME_EXE): $(OBJ) $(NAME)
	$(CC) $(OBJ) -o $(NAME_EXE) -L. -lftprintf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(NAME_EXE)

re: fclean all

test: $(NAME) $(NAME_EXE)

.PHONY: all clean fclean re
