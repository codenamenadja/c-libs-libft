#include <unistd.h>
#define ft_putc(c, fd) (write(fd, c, 1))

void    ft_putchar(char c)
{
    unsigned char   key;

    key = (unsigned char)c;
    ft_putc(&key, STDOUT_FILENO);
}
