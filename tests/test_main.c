#include "tests.h"

int main(void)
{
    return (
            test_strchr("test_string_to strchr", '_')
            & 
            test_strdup("original string to duplicate!\0")
           );
}
