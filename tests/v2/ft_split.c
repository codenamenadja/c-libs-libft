#include "../test.h"

unsigned char test_split(char *str, const char *charset)
{
    size_t i;
    char **arr;
    char *str_pt;
    arr = ft_split(str, charset);
    str_pt = *arr;
    log_info("test_split with '%s' by '%s'...", str, charset);    
    i = 0;
    while(*(arr+i) != NULL)
    {
        log_info("%ldth: elem: '%s'", i, str_pt);
        i++;
        str_pt = *(arr+i);
    }
    log_info("last : %s\n", *(arr+i));
    while(i--)
    {
        log_info("free: %ld\n", i);
        free(*(arr+i));
    }
    free(arr);
    return (EXIT_SUCCESS);
}
