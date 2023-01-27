NAME = libasm.a

FLAG = nasm

NFLAGS = -f macho64

SRC = srcs/ft_read.s \
	srcs/ft_write.s \
	srcs/ft_strcmp.s \
	srcs/ft_strlen.s \
	srcs/ft_strcpy.s \
	srcs/ft_strdup.s \

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33mUpdating library..."
	ar rc $(NAME) $^
	ranlib $(NAME)
	@echo "\033[0m"

%.o: %.s
	@echo "\033[0;32mGenerating binary..."
	$(FLAG) $(NFLAGS) $<
	@echo "\033[0m"

clean:
	@echo "\033[0;31mCleaning..."
	rm -f srcs/*.o
	@echo "\033[0m"

fclean: clean
	@echo "\033[0;31mRemoving library..."
	rm -f $(NAME)
	rm -f exec
	@echo "\033[0m"

re: fclean all

test: 
	@echo "\033[0m"
	@echo "\033[0;36mTesting : "
	gcc -L. -lasm -o exec test/main.c
	@echo "\033[0m"
	./exec

.PHONY: all re clean fclean test
