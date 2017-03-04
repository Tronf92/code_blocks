#include <stdio.h>
#include <conio.h>
void main(void)
{
    int Fibonacci[200],i,n;
    printf("Introduceti nr de elemente:");
    scanf("%d",&n);
    Fibonacci[0]=0;
    Fibonacci[1]=1;
    for (i=2;i<n;i++){
        Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
    }



    for (i=0;i<n;i++){
            printf("%d \n",Fibonacci[i]);
        }

    }


