#include "../test.h"

unsigned char test_strchr(const char *str, int c)
{    
    int i;
    int len;
    char *expected;
    char *res;

    log_info("test_strchr, find %c, in %s...", c, str);
    len = ft_strlen(str);
    i = 0;
    while (*(str + i) != c && i < len)
        i++;
    expected = (char *)(str + i);
    if (i == len && c != 0)
        expected = NULL;
    res = ft_strchr(str, c);
    check((expected == ft_strchr(str, c)),
            "not precessed as expected:'%s' != '%s'", expected, res);
    log_info("test_strchr, worked pass, expected:'%s' == '%s'", expected, res);
    return (EXIT_SUCCESS);
error:
    return (EXIT_FAILURE);
}

