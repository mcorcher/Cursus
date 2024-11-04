NAME = libftprintf.a

CC	= cc

CFLAGS = -Wall -Werror -Wextra

SRCS =	ft_putnbr.c	ft_puthexadecimal.c	ft_printfutils.c	

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -fr $(OBJ_DIR)

fclean : clean
	rm -f  $(NAME)

re : fclean all

.PHONY: all clean fclean re