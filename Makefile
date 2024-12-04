NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f

SRC = ft_printf.c utils/ft_strlen.c utils/ft_putchar.c utils/ft_putstr.c utils/ft_putnbr.c utils/ft_putnbr_base.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)

%.o : %.c ft_printf.h 
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean