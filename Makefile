CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -Iincludes/ -c
.DEFALT_GOAL		:= all
NAME				= libft.a

SOURCES				= $(wildcard srcs/ft_*.c)
HEADERS				= $(wildcard includes/*.h)
OBJECTS				= $(patsubst %.c, %.o, $(SOURCES))
TESTS			= $(wildcard tests/*.c)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: test
test: $(TESTS)
	$(CC) -Werror -Wextra -Wall $^ $(NAME) -o tests/test.out
	./tests/test.out


.PHONY: clean
clean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f tests/*.out

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)

.PHONY: re
re: fclean all

