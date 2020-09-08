#include <stdio.h>
#include "dbg.h"
#include "tests.h"

int main(void)
{
    int success = 0;
    int failure = 0;
    printf("1. test start\n");

    /*
    printf("2. test ft_memchr start\n");
    test_ft_memchr() ? failure++ : success++;
    printf("2. test ft_memchr end\n\n\n");

    printf("3. test ft_memmove start\n");
    test_ft_memmove() ? failure++ : success++;
    printf("3. test ft_memmove end\n\n\n");

    */
    printf("4. test_ft_memcmp start\n");
    test_ft_memcmp() ? failure++ : success++;
    printf("4. test ft_memcmp end\n\n\n");

    printf("Success: %d, Failure: %d", success, failure);
    if (failure)
        return 1;
    return 0;
}
