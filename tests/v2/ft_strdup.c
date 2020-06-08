#include "../test.h"
unsigned char test_strdup(char *s)
{
    char *deep_copy = ft_strdup(s);
    log_info("test_strdup with '%s'...", s);
    check((ft_strcmp(s, deep_copy) == 0),
            "origin:'%s' != dup:'%s'", s, deep_copy);
    free(deep_copy);
    log_info("test_strdup EXIT_SUCCESS. freed '%s'.", s);
    return (EXIT_SUCCESS);
error:
    free(deep_copy);
    return (EXIT_FAILURE);
}
