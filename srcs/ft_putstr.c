#include <unistd.h>

void    ft_putstr(char *str)
{
    size_t      len;

    len = 0;

    while (*(str+len))
        len++;
    if (len)
        write(STDOUT_FILENO, str, len);
}
