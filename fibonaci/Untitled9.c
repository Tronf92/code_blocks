#include <stdio.h>
#include <conio.h>

int Fibonacci(int N){
    if (N==0)
        return 0;
    if (N==1)
        return 1;
    return Fibonacci(N-1)+Fibonacci(N-2);
}

void main (void)
{
    int n;
    printf("N=");
    scanf("%d",&n);
    printf("Fibonacci(%d)=%d\n",n,Fibonacci(n));
    printf("\n\n---------------\nApasa o tasta...");
    getch();
}
