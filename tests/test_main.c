#include <unistd.h>
#include <string.h>
#include "dbg.h"
#include "../includes/libft.h"

int test_ft_strlen(const char *str);
int test_ft_strcmp(const char *s1, const char *s2);
int test_ft_strncmp(const char *s1, const char *s2, size_t n);
int test_ft_putchar(int c);
int test_ft_swap(int *a, int *b);
int test_ft_putstr(char *str);
int test_ft_strchr(const char *s, int c);
int test_ft_strrchr(const char *s, int c);
int test_ft_strnchr(const char *s, int c, size_t n);
int test_ft_strdup(const char *s);
int test_ft_strndup(const char *s, size_t n);

int main(void)
{
   test_ft_putchar('a');
   test_ft_putchar(';');
   test_ft_putchar('0');
   test_ft_strlen("test string...");
   test_ft_strlen("test st\tri\tn\ng..\0.");
   test_ft_strlen("");
   test_ft_strlen("\n\t");
   test_ft_strcmp("test string...", "te\tst cmp");
   test_ft_strcmp("", "test st\tri\tn\ng..\0.");
   test_ft_strcmp("", "\0");
   test_ft_strcmp("\n\t", "");
}

int test_ft_putchar(int c)
{
    int     res;

    log_info("test ft_putchar(%c)...", c);
    res = ft_putchar(c);
    check((c == res),
            "ft_putchar(%d) expected returns %d, but %d", c, c, res);
    return (0);

error:
    log_err("test failed");
    return (1);
}

int test_ft_strlen(const char *str)
{
    size_t res;
    size_t origin;

    log_info("test ft_strlen(%s)...", str);
    res = ft_strlen(str);
    origin = strlen(str);

    check((res == origin),
            "ft_strlen(%s) expected returns %lu, but %lu", str, res, origin
            )
    return (0);

error:
    log_err("test_failed");
    return (1);
}

int test_ft_strcmp(const char *s1, const char *s2)
{
    int res;
    int origin;

    log_info("test ft_strcmp(%s, %s)...", s1, s2);
    res = ft_strcmp(s1, s2);
    origin = strcmp(s1, s2);

    check((res == origin),
            "ft_strcmp(%s, %s) expected returns %d, but %d", s1, s2, res, origin
            )
    return (0);

error:
    log_err("test_failed");
    return (1);
}
