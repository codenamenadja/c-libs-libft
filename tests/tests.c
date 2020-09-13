#include <stdio.h>
#include "dbg.h"
#include "tests.h"

int main(void)
{
    int success = 0;
    int failure = 0;
    printf("1. test start\n");

    printf("2. test ft_memchr start\n");
    test_ft_memchr() ? failure++ : success++;
    printf("2. test ft_memchr end\n\n\n");

    printf("3. test ft_memmove start\n");
    test_ft_memmove() ? failure++ : success++;
    printf("3. test ft_memmove end\n\n\n");

    printf("4. test_ft_memcmp start\n");
    test_ft_memcmp() ? failure++ : success++;
    printf("4. test ft_memcmp end\n\n\n");

    printf("5. test_ft_memset start\n");
    test_ft_memset() ? failure++ : success++;
    printf("5. test ft_memset end\n\n\n");

    printf("6. test_ft_bzero start\n");
    test_ft_bzero() ? failure++ : success++;
    printf("6. test ft_bzero end\n\n\n");

    printf("7. test_ft_memcpy start\n");
    test_ft_memcpy() ? failure++ : success++;
    printf("7. test ft_memcpy end\n\n\n");

    printf("8. test_ft_memccpy start\n");
    test_ft_memccpy() ? failure++ : success++;
    printf("8. test ft_memccpy end\n\n\n");


    printf("Success: %d, Failure: %d", success, failure);
    if (failure)
        return 1;
    return 0;
}
