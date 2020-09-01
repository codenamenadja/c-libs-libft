libft
=====

[SOURCE]: https://github.com/languagenamenadja/c-libs-libft

intro
-----

This package is a project to mimic Glibc's string manipulate functions.
its easy discriminate that diff from this and addtionals is this non using malloc or pointer array excepts ``strdup`` function.
functions in this lib usually manipulate the value in pointer.

.. language-block:: bash

   make
   make test
   make clean
   make fclean

makefile
--------

   .. literalinclude:: Makefile
      :language: makefile
      :encoding: latin-1

header
------

   .. literalinclude:: literalincludes/libft.h
      :language: c
      :encoding: latin-1

test
----

   .. literalinclude:: tests/test_main.c
      :language: c
      :encoding: latin-1

content
-------

   .. literalinclude:: srcs/ft_putchar.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strchr.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strcmp.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strdup.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strlen.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strnchr.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strncmp.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strndup.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_strrchr.c
      :language: c
      :encoding: latin-1

   .. literalinclude:: srcs/ft_swap.c
      :language: c
      :encoding: latin-1

