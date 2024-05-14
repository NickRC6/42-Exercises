NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werrors

SRC = ./src/find_largest_square.c ./src/print_map.c ./src/read_map.c ./src/main.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all