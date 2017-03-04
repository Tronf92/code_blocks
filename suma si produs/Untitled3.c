#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a,suma, produsul,calculsuma;
    suma=0;
    produsul=1;
    calculsuma=0;
    do{
        printf("Introduceti un nr:");
        scanf("%d",&a);
        if(a!=0){
            if (calculsuma==1){
                suma+=a;
            }
            else {
                produsul*=a;
            }
            calculsuma=!calculsuma;
        }
    }while (a!=0);
    printf("Suma numerelor:%d\n",suma);
    printf("Produsul numerelor:%d\n",produsul);
    getch();

}
