#include "../dbg.h"
#include "../../includes/libft_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int test_ft_memcmp(void)
{
    char        s1[32]      = {0};
    char        n_str[3]    = {0};
    char        s2[32]      = {0}; 
    int         n;
    int         res;
    int         origin;

    log_info("START");
    printf("s1 str input in len 31: ");
    printf("\n");
    check((scanf("%s", s1)), "scanf error.");

    printf("s2 str input in len 31: ");
    printf("\n");
    check((scanf("%s", s2)), "scanf error.");

    printf("nbyte to memcmp?: ");
    scanf("%s", n_str);
    printf("\n");
    n = atoi(n_str);
    printf("s1: '%s'\ns2: '%s'. cmp in %d bytes...\n", s1, s2, n);

    origin = memcmp(s1, s2, n);
    res = ft_memcmp(s1, s2, n);
    check((res == origin), "res :%d\nori :%d", res, origin);
    log_info("res :%d\nori :%d", res, origin);
    log_info("SUCCESS");
    return (EXIT_SUCCESS);

error:
    log_err("FAILURE");
    return (EXIT_FAILURE);
}
