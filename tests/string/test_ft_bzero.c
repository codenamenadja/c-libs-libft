#include "../dbg.h"
#include "../../includes/libft_string.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int test_ft_bzero(void)
{
    char        s[32]       = {0};
    char        ori[32]     = {0};
    char        n_str[3]    = {0};
    int         n;
    int         cmp;

    log_info("START");
    printf("s str input in len 31: ");
    printf("\n");
    check((scanf("%s", s)), "scanf error");

    ft_memmove(ori, s, 32);
    ft_memcpy(ori, s, 32);

    cmp = ft_memcmp(s, ori, 32);
    check(!(cmp), "%d is cmped before bzero result.", cmp);
    printf("nbyte to bzero?: ");
    check((scanf("%s", n_str)), "scanf error");
    printf("\n");
    n = atoi(n_str);
    printf("s: '%s'\nbzero in %d bytes...\n", s, n);

    ft_bzero(s, n);
    bzero(ori, n);
     
    n = -1;
    while (++n < 32)
        printf("%d: %d, %d\n", n, *(s + n), *(ori + n));
    cmp = ft_memcmp(s, ori, 32);
    check(!(cmp), "%d is cmped result.", cmp);
    if (!cmp)
        log_info("'%s' : '%s' are equal.", s, ori);
    else
        log_info("'%s' : '%s' are equal.", s, ori);
    log_info("SUCCESS");
    return (EXIT_SUCCESS);

error:
    log_err("FAILURE");
    return (EXIT_FAILURE);
}
