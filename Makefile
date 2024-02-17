CC = CC

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_printf.c ft_decimal_to_hex.c ft_check.c ft_decimal_to_hexa.c 	\
		ft_put_positive.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_put_adress.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all