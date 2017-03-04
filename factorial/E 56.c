#include <stdio.h>
#include <conio.h>

long Factorial(int N){
    if (N==0)
        return 1;
    return N*Factorial(N-1);
}

void main(void)
{
    int n;
    printf("N=");
    scanf("%d",&n);
    printf("%d!=%ld\n",n,Factorial(n));

    printf("\n\n----------------\nApasa o tasta...");
    getch();

}
