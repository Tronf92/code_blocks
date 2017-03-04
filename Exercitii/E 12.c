#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a,n,x,y;
    printf("Introduceti n=");
    scanf ("%d",&n);
    printf("Introduceti x=");
    scanf ("%d",&x);
    printf("Introduceti y=");
    scanf ("%d",&y);
    int i=0;
    int total=0;
    while (i<n){
        printf("a=");
        scanf("%d",&a);
        if (a>0){
            if ((a%x)==y){
                printf ("Numarul %d impartit la %d da rest %d\n",a,x,y);
                total++;
            }}
        else {
            printf("Introduceti numai nr pozitive");}
            i++;

    }
    printf("Am gasit %d numere care impartite la %d dau rest %d",total,x,y);
    getch();
}
