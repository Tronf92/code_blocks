#include <stdio.h>
#include <stdlib.h>

int i = 5;
int main()
{
    printf("i = %d \n", i);

    int i = 7;
    printf("i = %d \n", i);
    {
        int i = 9;
        printf("i = %d \n", i);

    }
    printf("i = %d \n", i);

    return 0;
}
