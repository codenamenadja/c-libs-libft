#include "../dbg.h"
#include "../../includes/libft_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int test_ft_memset(void)
{
    char        s[32]       = {0};
    char        c;
    int         n;
    char        *res;
    char        *origin;

    log_info("START");
    printf("s str input in len 31: ");
    printf("\n");
    check(EOF != (scanf("%s", s)), "scanf error");

    printf("c character input to set: ");
    printf("\n");
    check(EOF != (scanf("%c", &c)), "scanf error");

    printf("nbyte to set?: ");
    check(EOF != (scanf("%d", &n)), "scanf error");
    printf("\n");
    printf("s: '%s'\nkey: '%c'. find in %d bytes...\n", s, c, n);

    origin = (char *)memset(s, c, n);
    res = (char *)ft_memset(s, c, n);
    check((res == origin), "res :%p:%c\nori :%p:%c", res, *res, origin, *origin);
    if (res && origin)
        log_info("res :%p:%s\nori :%p:%s", res, res, origin, origin);
    else
        log_info("Not found equal");
    log_info("SUCCESS");
    return (EXIT_SUCCESS);

error:
    log_err("FAILURE");
    return (EXIT_FAILURE);
}
