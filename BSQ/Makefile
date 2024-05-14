NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werrors

SRC = find_largest_square.c print_map.c read_map.c main.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all