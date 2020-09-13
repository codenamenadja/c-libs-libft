#include "../dbg.h"
#include "../../includes/libft_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int test_ft_memcpy(void)
{
    char        dest[32]    = {0};
    char        origin[32]  = {0};
    char        src[32]     = {0};
    char        n_str[3]    = {0};
    char        *res;
    char        *ori;
    int         n;

    log_info("START");
    printf("dest str input in len 31: ");
    check((scanf("%s", dest)), "scanf error");
    printf("\n");

    printf("src str input in len 31: ");
    check((scanf("%s", src)), "scanf error");
    printf("\n");

    memmove(origin, dest, 32);
    printf("nbyte to copy?: ");
    check((scanf("%s", n_str)), "scanf error");
    printf("\n");
    n = atoi(n_str);
    printf("dest: '%s'\nsrc: '%s'. copy %d bytes.\n", dest, src, n);

    ori = (char *)memcpy(origin, src, n);
    res = (char *)ft_memcpy(dest, src, n);
    
    check((!(strcmp(dest, origin))), "dest:'%s'\norigin:'%s'\n is not equal.", dest, origin);
    check((*ori == *res), "res: %c, origin res: %c. non equal.", *res, *ori);
    log_info("dest: '%s'\norigin: '%s'", dest, origin);
    log_info("SUCCESS");

    return (EXIT_SUCCESS);

error:
    log_err("FAILURE");
    return (EXIT_FAILURE);
}
