#include <unistd.h>
#define ft_putc(c, fd) (write(fd, c, 1))

int     ft_putchar(int c)
{
    return ft_putc(&c, STDOUT_FILENO);
}
