SRCS        = ./src/ft_strlen.s ./src/ft_strcpy.s ./src/ft_strcmp.s ./src/ft_strdup.s ./src/ft_write.s ./src/ft_read.s
OBJS        = $(SRCS:.s=.o)
BONUS_SRCS  = 
BONUS_OBJS  = $(BONUS_SRCS:.s=.o)

NA          = nasm
NA_FLAGS    = -f elf64 -g 
FLAGS       = -Wall -Werror -Wextra -no-pie
NAME        = libasm.a
TEST        = tests
TEST_BONUS  = test_bonus

%.o: %.s
	$(NA) $(NA_FLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME) $(BONUS) $(TEST) $(TEST_BONUS)

re: fclean $(NAME)

test: $(NAME)
	gcc $(FLAGS) -o $(TEST) main.c $(NAME)
	./$(TEST)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

test_bonus: bonus
	gcc $(FLAGS) -o $(TEST_BONUS) main.c $(NAME)
	./$(TEST_BONUS)

pie: $(OBJS)
	gcc -pie $(FLAGS) -o $(TEST) main.c $(OBJS)
	./$(TEST)

.PHONY: clean fclean re test bonus test_bonus pie

