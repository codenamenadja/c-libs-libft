libft
=====

intro
-----

This package is a project to mimic Glibc's string manipulate functions.
its easy discriminate that diff from this and addtionals is this non using malloc or pointer array excepts ``strdup`` function.
functions in this lib usually manipulate the value in pointer.

.. code-block:: bash

   make
   make test
   make clean
   make fclean

makefile
--------

   .. include:: Makefile
      :code: makefile
      :encoding: latin-1

header
------

   .. include:: includes/libft.h
      :code: c
      :encoding: latin-1

test
----

   .. include:: tests/test_main.c
      :code: c
      :encoding: latin-1

content
-------

   .. include:: srcs/ft_putchar.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strchr.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strcmp.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strdup.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strlen.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strnchr.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strncmp.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strndup.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_strrchr.c
      :code: c
      :encoding: latin-1

   .. include:: srcs/ft_swap.c
      :code: c
      :encoding: latin-1

