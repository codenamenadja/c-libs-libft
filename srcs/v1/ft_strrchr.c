#include <unistd.h>

char    *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (*(s + i))
        i++;
    if (!c)
        return ((char *)(s + i));
    while (*(s + i) != c && i != 0)
        i--;
    if (*(s + i) == c)
        return ((char *)(s + i));
    return (NULL);
}
