#include <unistd.h>
#define ft_putc(c, fd) (write(fd, c, 1))

int     ft_putchar(int c)
{
    unsigned char key;

    key = (unsigned char)c;
    return ft_putc(&key, STDOUT_FILENO);
}
