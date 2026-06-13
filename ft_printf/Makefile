NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = ft_hexa.c \
	   ft_negnum.c \
	   ft_numlen.c \
	   ft_padding.c \
	   ft_printf.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_putunbr.c \
	   ft_reset.c \
	   ft_strlen.c \
	   ft_toupper.c \
	   ft_typechar.c \
	   ft_typehexa.c \
	   ft_typeint.c \
	   ft_typestring.c \
	   ft_typeunsint.c \
	   ft_typevoid.c \
	   ft_choseflags.c \
	   ft_putsign.c \
	   ft_prefix.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
