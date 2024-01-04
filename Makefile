NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf

SRC				=	main.c \
					check.c \
					error.c \
					print.c \
					set.c \

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(SRC)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
