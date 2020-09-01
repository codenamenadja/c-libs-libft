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

   .. code-block:: c

      int ft_strlen(const char *str);
      int ft_strcmp(const char *s1, const char *s2);
      int ft_strncmp(const char *s1, const char *s2, size_t n);
      int ft_putchar(char c);

      void ft_swap(int *a, int *b);
      void ft_putstr(char *str);

      char *ft_strchr(const char *s, int c);
      char *ft_strrchr(const char *s, int c);
      char *ft_strnchr(const char *s, int c, size_t n);

      char *ft_strdup(const char *s);
      char *ft_strndup(const char *s, size_t n);

functions
---------

``ft_putchar``::

   - DESC: act like origin ``putchar`` , put argument ``char c`` to stdout.
           as written in manual, ``ft_putchar`` uses cutom macro ``ft_putc`` defined in same file.
           it's said to internally converts ``c`` to ``unsigned char`` and return as ``int``

   - DEPENDS: ``<unistd.h>`` ``<stdio.h>``
   - RETURNS:

      - success: argument ``c`` to int
      - failure: EOF on error

``ft_strchr``::

   - DESC: 
   - DEPENDS: 
   - RETURNS:

      - success: 
      - failure: 

``ft_strcmp``::

   - DESC: 
   - DEPENDS: 
   - RETURNS:

      - success: 
      - failure: 

``ft_strdup``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

``ft_strlen``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

``ft_strnchr``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

``ft_strncmp``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

``ft_strndup``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

``ft_strrchr``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

``ft_swap``::

   - DESC: 
   - DEPENDS: 
   - RETURNS: 

      - success: 
      - failure: 

