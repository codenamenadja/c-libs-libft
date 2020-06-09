Rules
    1. makesure appropriate permissions on files ans dirs
    1. compile options: -Wall -Wextra -Werror and use gcc
    1. TEST command target: ``make test_v1``, ``make test_v2``(works with libft.a file.)

### versions and members

- **v1**
    - ``void ft_putchar(char c);``
        - DESC
            - ``putchar(c)`` is equivalent to ``putc(c, stdout)``  
            with casting parameter c to unsigned char.

    - ``void ft_putstr(char *str);``
        - DESC
            - get length of *str and write out to stdout

    - ``int ft_strlen(const char *str);``
        - DESC
            - get length of *str
        - RETURNS
            - count of characters excepts NUL-exit byte.
    - ``void ft_swap(int *a, int *b);``
        - DESC
            - swap the value of two pointers.
    - ``int ft_strcmp(const char *s1, const char *s2);``
        - DESC
            - compare two pointers by 1byte.
        - RETURNS
            - decreased from s1 by s2 for diff bytes.  
            if they were ended equally, returns 0.
    - ``int ft_strncmp(const char *s1, const char *s2, size_t n);``
        - DESC
            - compare two pointers by 1byte til n bytes read.
        - RETURNS
            - same with ft_strcmp.
    - ``char *ft_strchr(const char *s, int c);``
        - DESC
            - returns pointer to first occuence of character c in string s. 
        - RETURNS
            - NULL on not found, (char *)pt on found.
    - ``ft_strrchr(const char *s, int c);``
        - DESC
            - same with strchr but, search starts from bigger location.
        - RETURNS
            - equals to strchr.
    - ``ft_strnchr(const char *s, int c, size_t n);``
        - DESC
            - same with strchr but, only searchs in n bytes counts.
        - RETURNS
            - equals to upper.
    - ``ft_strdup(const char *s);``
        - DESC
            - returns pointer to a new string of s, duplication of s.  
memory obtained function is ``malloc``.
        - RETURNS
            - NULL on mem-allocation error. success on duplicated string's pointer with 0-Termination.
    - ``ft_strndup(const char *s, size_t n);``
        - DESC
            - same with strdup, but only duplicates n bytes.
        - RETURNS
            - equals to upper.



- **v2**
    - ``char **ft_split(char *str, char *charset);``
        - DESC
            - split str with charsets, duplicates those seperations, and ``(char **)malloc(sizeof(char *) * i + 1)`` happens.
            - NULL pointer at the end.
            - ft_split also uses below **v1 functions**.
                - ft_strlen: get length of charset.
                - ft_strchr: get occurence of *charset character in str, inorder.
                - ft_strncmp: check occruece char_pt is match to charset-str.
                - ft_strndup: copy(start, (found - start)), ``start`` pointer moves to found+charset_len, only if it matchs.
                - ft_strdup: copy the left strs with 0-terminations.
            - if any malloc allocation fails, free all dupplicateds and return NULL.
        - RETURNS
            - Returns Pointer which stores values of pointer(string).
            - also allocation of partial string splitted fails to allocate memory, i reconginzed that as an error.
                - free all members if allocation of return pointer allocation fails.
            - Return NULL means, all if freed.

### additional

- ``#define ft_putc(c, fd) (write(fd, c , 1);``
    - DESC
        - writes the character c, **cast to unsigned char**, to stream.
    - RETURNS
        - ssize_t, written character count.  
        success on 1 / 0 on none / -1 on error
