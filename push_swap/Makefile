NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c \
	ft_swap.c \
	ft_rotate.c \
	ft_reverse_rotate.c \
	ft_push.c \
	ft_error.c \
	ft_is_number.c \
	ft_atol.c \
	ft_has_duplicate.c \
	ft_join_args.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_build_stack.c \
	ft_free_split.c \
	ft_create_node.c \
	ft_parse.c \
	ft_split.c \
	ft_strlen.c \
	ft_count_words.c \
	ft_word_length.c \
	ft_radix_sort.c \
	ft_get_max_bits.c \
	ft_is_sorted.c \
	ft_sort_3.c \
	ft_sort_5.c \
	ft_sort_stack.c \
	ft_create_array.c \
	ft_sort_array.c \
	ft_index_stack.c \
	ft_free_stack.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus