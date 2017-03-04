#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a,par,impar;
    par=0;
    impar=-1;
    printf ("Introduceti a=");
    scanf("%d",&a);
    if (a!=0){
        do{

            if ((a%2)==0){
                do{
                    par+=2;
                    printf("%d ",par);

                }
                while (par<a);
            }
            else {
                if (a%2!=0){
                    do {
                    impar+=2;
                    printf("%d ",impar);
                    }
                while (impar<a);
            }
        }
    }
        while (a==0);}
    else {
        printf("Introduceti numere diferite de 0");
    }
    getch();

}
