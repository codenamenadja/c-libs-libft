#include <unistd.h>
#include <stdlib.h>

char    *ft_strndup(const char *s, size_t len)
{
    ssize_t  i;
    char    *pt;

    pt = malloc((len + 1) * sizeof(char));
    if (!pt)
        return (NULL);
    i = -1;
    while (++i < len)
        *(pt + i) = *(s + i);
    *(pt + i) = '\0';
    return (pt);
}
