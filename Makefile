
#Variables:
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#Files:
SRC = fill_stack_a.c push_swap.c split.c function.c \
	swap.c push.c last_nodes.c reverse_rotate.c rotate.c \
 	push_swap_utils.c sorting.c max_min.c sort_stack.c \
	algo.c creation_nodes.c sorting_utils.c algo_utils.c 

OBJ = ${SRC:.c=.o}

#library:
NAME = push_swap

#colors:
GREEN0 = "\033[32m"
FLUSHING = \033[5m
BLUE = \033[34m
RESET = \033[0ml	
all: $(NAME)



$(NAME) : $(OBJ)
	@echo "$(BLUE) Making $(NAME) .. 🦋"
	cc $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	@echo $(GREEN0)cleaning ...  
	$(RM) $(OBJ)

fclean: clean
	@echo $(GREEN0)Full cleaning 🧼
	@echo $(GREEN0)Making ... 🦋 
	$(RM) $(NAME) 

re: fclean all

.SECONDARY:$(OBJ) 