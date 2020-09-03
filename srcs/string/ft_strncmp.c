#include <unistd.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if(!n)
        return (0);
    i = 0;
    while ((*(s1 + i) == *(s2 + i)) && i < n)
    {
        if (*(s1 + i) == 0)
            break;
        i++;
    }
    if(i == n)
        i--;
    return (*(s1 + i) - *(s2 + i));
}
