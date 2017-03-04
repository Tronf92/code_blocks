#include<stdio.h>
#include <conio.h>
#include <stdbool.h>

void main(void)
{
    int n,e,i;
    int tablou[31000];
    n=30000;
    e=30000;
    long m;
    long stanga=0;
    long dreapta=n-1;
    bool gasit = false;
    int pasiCautareBinara=0;
    while ((stanga<=dreapta)&& (!gasit)){
        m=(stanga+dreapta)/2;
        if (tablou[m]==e){
            gasit=true;
            }
        else {
            if (tablou[m]<e){
                stanga=m+1;}
            else {
                dreapta=stanga-1;}


            }
        pasiCautareBinara++;
        }
    printf("Cautarea binara a parcurs %d pasi.Rezultat:\n\t", pasiCautareBinara);
    if (gasit){
        printf("elementul cautat se afla pe pozitia %d!\n",m);}
    else {
        printf("elementul cautat nu exista!\n");}
    getch();
}
