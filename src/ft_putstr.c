#include <unistd.h>
#include "libft.a"

void    ft_putstr(char *str)
{
    size_t      len;

    len = ft_strlen(str);
    if (len)
        write(STDOUT_FILENO, str, len);
}
