#include <stdio.h>
#include <stdlib.h>

void    test(char *, char *);

int main()
{
    char dst[12];
    char src[12] = "hello";
    test(dst, src);
    return (0);
}