NAME=libftprintf.a
CC= cc
FLAGS= -Wall -Werror -Wextra
FUNC= ft_putchar.c ft_puthex.c ft_putptr.c ft_putunsnbr.c ft_printf.c ft_putnbr.c\
	  ft_putstr.c
OBJ= ft_putchar.o ft_puthex.o ft_putptr.o ft_putunsnbr.o ft_printf.o ft_putnbr.o\
	 ft_putstr.o

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(FUNC)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)
 
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
