CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -c
.DEFALT_GOAL		:= all
NAME				= libft.a

SOURCES				= $(wildcard srcs/*/ft_*.c)
CTYPE_SOURCES		= $(wildcard srcs/ctype/ft_*.c)
STRING_SOURCES		= $(wildcard srcs/string/ft_*.c)
STDLIB_SOURCES		= $(wildcard srcs/stdlib/ft_*.c)
HEADERS				= $(wildcard includes/*.h)
OBJECTS				= $(patsubst %.c, %.o, $(SOURCES))
CTYPE_OBJECTS		= $(patsubst %.c, %.o, $(CTYPE_SOURCES))
STRING_OBJECTS		= $(patsubst %.c, %.o, $(STRING_SOURCES))
STDLIB_OBJECTS		= $(patsubst %.c, %.o, $(STDLIB_SOURCES))
TESTS				= $(wildcard tests/*/*.c)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: each
each: ctype string stdlib

.PHONY: ctype
ctype: $(CTYPE_OBJECTS)
	ar rcs libft_ctype.a $(CTYPE_OBJECTS)	
	ranlib libft_ctype.a

.PHONY: string
string: $(STRING_OBJECTS)
	ar rcs libft_string.a $(STRING_OBJECTS)
	ranlib libft_string.a

.PHONY: stdlib
	ar rcs libft_stdlib.a $(STDLIB_OBJECTS)
	ranlib libft_stdlib.a

.PHONY: test
test: $(TESTS)
	$(CC) -Werror -Wextra -Wall tests/tests.c $^ libft_string.a -o tests/test.out
	./tests/test.out


.PHONY: clean
clean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f tests/*.out

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft_*.a

.PHONY: re
re: fclean all

