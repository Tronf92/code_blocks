#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a,suma;
    a=-1;
    suma=0;
    while(a!=0){
        printf("Introduceti un nr:");
        scanf("%d",&a);
        suma+=a;
    }
    printf("Suma numerelor:%d",suma);
    getch();

}
