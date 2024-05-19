CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f

NAME = libftprintf.a

SRC = ft_printf.c ft_putf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	   $(LIBC) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: all			# REMOVE TEST!!!!!! #
	$(CC) main.c $(NAME)	#####################

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) a.out	# REMOVE A.OUT #

re: fclean all

.PHONY: all clean fclean re
