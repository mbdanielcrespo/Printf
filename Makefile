NAME = libftprintf.a
RM = rm -f

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./libft

SRC = ft_printf.c \
ft_printf_ptr.c \
libft/ft_atoi.c \
libft/ft_bzero.c \
libft/ft_calloc.c \
libft/ft_itoa.c \
libft/ft_putchar_fd.c \
libft/ft_putnbr_fd.c \
libft/ft_putstr_fd.c \
libft/ft_strlen.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re