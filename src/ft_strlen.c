#include <unistd.h>

size_t  ft_strlen(char *str)
{
    size_t res;

    res = 0;
    while (*str++)
        res++;
    return (res);
}
