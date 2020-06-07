Rules
    1. makesure appropriate permissions on files ans dirs
    1. compile options: -Wall -Wextra -Werror and use gcc

### versions and members

- **v1**
    - ``void ft_putchar(char c);``
        - DESC
            - ``putchar(c)`` is equivalent to ``putc(c, stdout)``  
            with casting parameter c to unsigned char.
    - ``void ft_putstr(char *str);``
        - DESC
            - get length of *str and write out to stdout
    - ``int ft_strlen(char *str);``
        - DESC
            - get length of *str
        - RETURNS
            - count of characters excepts NUL-exit byte.
    - ``void ft_swap(int *a, int *b);``
        - DESC
            - swap the value of two pointers.
    - ``int ft_strcmp(char *s1, char *s2);``
        - DESC
            - compare two pointers by 1byte.
        - RETURNS
            - decreased from s1 by s2 for diff bytes.  
            if they were ended equally, returns 0.
- **v2**
    - ``char **ft_split(char *str, char *charset);``
        - DESC
    - ``char *ft_strdup(char *s);``

### additional

- ``#define ft_putc(c, fd) (write(fd, c , 1);``
    - DESC
        - writes the character c, **cast to unsigned char**, to stream.
    - RETURNS
        - ssize_t, written character count.  
        success on 1 / 0 on none / -1 on error
