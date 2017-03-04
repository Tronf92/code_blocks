#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a,suma;
    suma=0;
    do{
        printf("Introduceti un nr:");
        scanf("%d",&a);
        suma+=a;
    }
    while (a!=0);
    printf("Suma este: %d",suma);
    getch();
}
