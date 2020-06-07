#include <unistd.h>
#include <stdlib.h>
#include "../../includes/ft_v1.h"

char    *ft_strdup(char *s)
{
    ssize_t  len;
    ssize_t  i;
    char    *pt;

    len = ft_strlen(s);
    i = -1;
    pt = malloc((len + 1) * sizeof(char));
    if (!pt)
        return (NULL);
    while (++i < len)
        *(pt + i) = *(s + i);
    *(pt + i) = '\0';
    return (pt);
}
