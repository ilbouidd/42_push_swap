SRCS =  push_swap.c  \
		errors.c     \
		swap.c       \
		
CC =	cc -Wall -Werror -Wextra

NAME =	push_swap

LIB = ./libft

OBJS =	$(SRCS:.c=.o)

all : $(NAME) 

$(NAME): $(OBJS)
	@make -C $(LIB)
	@cp $(LIB)/libft.a $(NAME)
	@ar -rsc $(NAME) $(OBJS)
	@echo "TOUT EST GOOD🤓👍🔥"

%.o : %.c
	@$(CC) -c $(SRCS)

clean :
	@make clean -C $(LIB)
	@rm -f $(OBJS)
	@echo "TOUT LES FICHIERS .o 💀"

fclean : clean
	@rm -f $(NAME)
	@echo "program push_swap 💀"

re : fclean all

.PHONY: all bonus clean fclean