#include <stdio.h>
#include "test.h"


int main()
{
    printf("program started\n");
    int a = count_letters("hello\0");
    printf("count 'hello'=%d\n", a);
    return 0;
}