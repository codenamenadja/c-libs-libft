#include "../dbg.h"
#include "../../includes/libft_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int test_ft_memchr(void)
{
    char        s[32]       = {0};
    char        c[1];
    int         n;
    char        *res;
    char        *origin;

    log_info("START");
    printf("s str input in len 31: ");
    printf("\n");
    check(EOF != (scanf("%s", s)), "scanf error");

    printf("c character input to find: ");
    printf("\n");
    check(EOF != (scanf("%s", c)), "scanf error");

    printf("nbyte to scan?: ");
    check(EOF != (scanf("%d", &n)), "scanf error");
    printf("\n");
    printf("s: '%s'\nkey: '%c'. find in %d bytes...\n", s, *c, n);

    origin = (char *)memchr(s, *c, n);
    res = (char *)ft_memchr(s, *c, n);
    check((res == origin), "res :%p:%c\nori :%p:%c", res, *res, origin, *origin);
    if (res && origin)
        log_info("res :%p:%c\nori :%p:%c", res, *res, origin, *origin);
    else
        log_info("Not found equal");
    log_info("SUCCESS");
    return (EXIT_SUCCESS);

error:
    log_err("FAILURE");
    return (EXIT_FAILURE);
}
