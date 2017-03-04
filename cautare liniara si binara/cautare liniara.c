#include <stdio.h>
#include <conio.h>
#define MAX_ELEMENTE 100
void main(void)
{
    int n,e,i;
    int tablou[31000];
    n=30000;
    for (i=0;i<n;i++){
        tablou[i]=i;
        }
    e=30000;
    i=0;
    int pasiCautareLiniara=0;
    while ((i<n)&&(tablou[i]!=e)){
        i++;
        pasiCautareLiniara++;}
    printf("Cautarea liniara a parcurs%d pasi.Rezultat:\n\t",pasiCautareLiniara);
    if (i==n){
        printf("Elementul cautat nu exista!\n");}
    else {printf("Elementul cautat se afla pe pozitia%d!\n",i);}
    getch();


}
