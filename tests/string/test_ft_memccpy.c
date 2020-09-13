#include "../dbg.h"
#include "../../includes/libft_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int test_ft_memccpy(void)
{
    char        dest[32]    = {0};
    char        origin[32]  = {0};
    char        src[32]     = {0};
    char        c;
    char        *res;
    char        *ori;
    int         n;

    log_info("START");
    printf("stop on what character occurs?: ");
    check((EOF != scanf("%c", &c)), "scanf error");
    printf("\n");
  
    printf("dest str input in len 31: ");
    check(EOF != (scanf("%s", dest)), "scanf error");
    printf("\n");

    printf("src str input in len 31: ");
    check(EOF !=(scanf("%s", src)), "scanf error");
    printf("\n");

    memmove(origin, dest, 32);
    printf("nbyte to copy?: ");
    check((EOF != scanf("%d", &n)), "scanf error");
    printf("\n");

    printf("dest: '%s'\nsrc: '%s'. copy %d bytes, stop when find '%c'.\n", dest, src, n, c);

    ori = (char *)memccpy(origin, src, c, n);
    res = (char *)ft_memccpy(dest, src, c, n);
    
    check((!(strcmp(dest, origin))), "dest:'%s'\norigin:'%s'\n is not equal.", dest, origin);
    check((*ori == *res), "res: %c, origin res: %c. non equal.", *res, *ori);
    log_info("dest: '%s'\norigin: '%s'", dest, origin);
    log_info("SUCCESS");

    return (EXIT_SUCCESS);

error:
    log_err("FAILURE");
    return (EXIT_FAILURE);
}
