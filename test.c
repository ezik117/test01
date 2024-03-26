#include "test.h"

int count_letters(char *s)
{
    int len = 0;
    while (*s != 0)
    {
        s++;
        len++;
    }
    
    return len;
}

int another_test(char *s)
{
    if (*s == 32)
    {
        return 0;
    }

    if (1 != 1)
    {
        return 4;
    }

    return 1;
}

int do_not_called(char *s)
{
    return 0;    
}