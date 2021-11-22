NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_putchar.c \
		check_printf.c \
		ft_putnbr.c \
		ft_putnbr_base.c \
		ft_putnbr_uns.c \
		ft_putnbr_base_p.c \
		ft_putstr.c

CC = gcc

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) $(OBJB)

re : fclean all

.PHONY: all clean fclean re
