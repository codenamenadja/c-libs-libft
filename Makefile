CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I. -c
.DEFALT_GOAL		:= all
NAME				= libft.a

V1_SOURCES			= $(wildcard src/v1/ft_*.c)
HEADERS				= $(wildcard includes/*.h)
OBJECTS				= $(patsubst %.c, %.o, $(SOURCES))

#DEP					= $(wildcard includes/*.h)
#-include			$(DEP)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: test
test: test.c
	$(CC) -Werror -Wextra -Wall $^ $(NAME) -o exe_test

.PHONY: clean
clean:
	@/bin/rm -f $(OBJECTS)
	@/bin/rm -f exe_test

.PHONY: fclean
fclean: clean
	@/bin/rm -f $(NAME)

.PHONY: re
re: fclean all

