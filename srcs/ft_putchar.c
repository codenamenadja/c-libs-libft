#include <unistd.h>
#include <stdio.h>
#define ft_putc(c, fd) (write(fd, c, 1))

int ft_putchar(char c)
{
    unsigned char   key;

    key = (unsigned char)c;
    if (ft_putc(&key, STDOUT_FILENO) != 1)
        return (EOF);

    return ((int)key);
}
