#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a=-1;
    int Poz=0, Neg=0;
    int totalPoz=0, totalNeg=0;
    while (a!=0){
        printf("a=");
        scanf("%d",&a);
        if (a>=0){
            totalPoz++;
            Poz+=a;}
        else {
            totalNeg++;
          }  Neg+=a;}

    totalPoz--;
    if (totalPoz>0){
        printf("Numere pozitive:%d.Media:%g\n",totalPoz,(double)Poz/totalPoz);}
    else
        {printf("Nu ati introdus numere pozitive!\n");}
    if (totalNeg>0){
        printf("Numere negative:%d.Media%g\n",totalNeg, (double)Neg/totalNeg);
    }
    else {
        printf("Nu ati introdus numere negative!\n");
    }
    getch();
    }



