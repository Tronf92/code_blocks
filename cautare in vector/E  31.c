#include <stdio.h>
#include <conio.h>
#define MAX_ELEMENTE 100
void main(void)
{
    int n,e,i;
    int tablou[MAX_ELEMENTE];
    printf("Nr de elemente: n=");
    scanf("%d",&n);
    printf("Introduceti elementele vectorului:\n");
    for (i=0;i<n;i++){
        printf("tablou[%d]=",i);
        scanf("%d",&tablou[i]);
        }
    printf("Introduceti elementul cautat e=");
    scanf("%d",&e);
    i=0;
    while ((i<n)&&(tablou[i]!=e)){
        i++;
        }
    if (i==n){
        printf("Elementul cautat nu exista!");
        }
    else {
        printf("Elem cautat se afla pe pozitia %d!",i);
        }
    getch();

}
