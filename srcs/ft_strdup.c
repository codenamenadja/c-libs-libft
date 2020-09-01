#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    ssize_t  len;
    ssize_t  i;
    char    *pt;

    len = 0;
    while (*(s + len))
        len++;
    pt = malloc((len + 1) * sizeof(char));
    if (!pt)
        return (NULL);
    i = -1;
    while (++i < len)
        *(pt + i) = *(s + i);
    *(pt + i) = '\0';
    return (pt);
}
