#include <unistd.h>

char    *ft_strnchr(const char *s, int c, size_t n)
{
    size_t i;

    if (!n)
        return (NULL);
    i = 0;
    while ((*(s + i) != c && *(s + i)) && i < n) 
        i++;
    if (*(s + i) == c && i < n)
        return ((char *)(s + i));
    return (NULL);
}
