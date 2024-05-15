NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werrors

SRC = ./src/ft_find_largest_square.c ./src/print_map.c ./src/ft_read_map.c ./src/main.c ./src/ft_putstr.c ./src/print_error.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all