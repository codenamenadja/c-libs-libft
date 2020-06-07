CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I. -c
.DEFALT_GOAL		:= all
NAME				= libft.a

SOURCES				= $(wildcard srcs/v*/ft_*.c)
HEADERS				= $(wildcard includes/*.h)
OBJECTS				= $(patsubst %.c, %.o, $(SOURCES))
V1_TESTS			= $(wildcard tests/v1/test_*.c)

#DEP					= $(wildcard includes/*.h)
#-include			$(DEP)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: test_v1
test_v1: $(V1_TESTS)
	$(CC) -Werror -Wextra -Wall $^ $(NAME) -o tests/v1/test.out

.PHONY: clean
clean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f tests/*/*.out

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)

.PHONY: re
re: fclean all

