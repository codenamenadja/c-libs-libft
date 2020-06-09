#include <unistd.h>
#include <stdlib.h>

char    *ft_strndup(const char *s, size_t len)
{
    size_t  i;
    char    *pt;

    pt = malloc((len + 1) * sizeof(char));
    if (!pt)
        return (NULL);
    i = 0;
    while (i < len)
    {
        *(pt + i) = *(s + i);
        i++;
    }

    *(pt + i) = '\0';
    return (pt);
}
