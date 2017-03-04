#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3, b = 2, c= 5;
    printf("a = %d, b=%d, c=%d\n", a, b, c);
    a += ++b + ++c;
    printf("a = %d, b=%d, c=%d\n", a, b, c);
    return 0;
}
