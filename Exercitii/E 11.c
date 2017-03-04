#include <stdio.h>
#include <conio.h>
void main(void)
{
    int n,i,suma=0;
    i=0;
        while (n!=0,i<10){
            printf("Introduceti n=");
            scanf("%d",&n);
            suma+=n;
            i++;
            if (i<10&&n==0){
                printf ("Mai introduceti numere\n");
            }


    }


    printf("Suma este=%d",suma);
    getch();


}
