CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f

NAME = libftprintff.a

SRC =

OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	   $(LIBC) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
