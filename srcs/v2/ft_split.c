#include <stdio.h>
#include <stdlib.h>
#include "../../includes/ft_v1.h"

char    **ft_split(const char *str, const char *charset)
{
    int             i;
    size_t          charset_len;
    char            *buf[BUFSIZ];
    const char      *start;
    const char      *found;
    char            **res;

    i = 0;
    charset_len = ft_strlen(charset);
    start = str;
    if (!ft_strncmp(start, charset, charset_len))
        start += charset_len;
    while ((found = ft_strchr(start, *charset)) && *found)
    {
        if (!ft_strncmp(found, charset, charset_len))
        {
            buf[i++] = ft_strndup(start, (found - start));
            start = found + charset_len;
        } else
        start = (found + 1);
    }
    if (*start)
        buf[i++] = ft_strdup(start);
    res = (char **)malloc(sizeof(char *) * i);
    *(res + i) = NULL;
    while(i--)
        *(res+i) = *(buf+i);
    return (res);
}
