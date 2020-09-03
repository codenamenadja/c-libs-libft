CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -c
.DEFALT_GOAL		:= all
NAME				= libft.a

SOURCES				= $(wildcard srcs/*/ft_*.c)
CTYPE_SOURCES		= $(wildcard srcs/ctype/ft_*.c)
HEADERS				= $(wildcard includes/*.h)
OBJECTS				= $(patsubst %.c, %.o, $(SOURCES))
CTYPE_OBJECTS		= $(patsubst %.c, %.o, $(CTYPE_SOURCES))
TESTS				= $(wildcard tests/*.c)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: each
each: ctype

.PHONY: ctype
ctype: $(CTYPE_OBJECTS)
	ar rcs libft_ctype.a $(CTYPE_OBJECTS)	
	ranlib libft_ctype.a

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
	/bin/rm -f libft_ctype.a

.PHONY: re
re: fclean all

