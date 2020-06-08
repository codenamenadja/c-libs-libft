#include <unistd.h>

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (*(s + i) != c && *(s + i))
        i++;
    if (!(*(s + i)) && c != 0)
        return (NULL);
    return ((char *)(s + i));
}
