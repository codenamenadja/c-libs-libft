#include <stdlib.h>
#include "../../includes/ft_v1.h"

char    **ft_split(const char *str, const char *charset)
{
    int             i;
    size_t          charset_len;
    char            **res;
    char            *str_buf[BUFSIZ];
    const char      *pt_buf[BUFSIZ];

    charset_len = ft_strlen(charset);
    i = 0;
    pt_buf[i] = str;
    while (pt_buf[i])
    {
        pt_buf[i+1] = (const char*)ft_strchr(pt_buf[i], *charset); 
        if(!pt_buf[i+1])
            break;
        if(ft_strncmp(pt_buf[i+1], charset, charset_len))
            pt_buf[i + 1] = NULL;
        i+=2;
    }
    i = 0;
    while(pt_buf[i+1] != NULL)
    {
        str_buf[i] = malloc(sizeof(char) *
                (pt_buf[i+1] - pt_buf[i] + 1));

    }
    res = (char *)malloc(i)

}

/*
**
*/
