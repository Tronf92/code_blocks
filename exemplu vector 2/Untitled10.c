#include <stdio.h>
#include <conio.h>
void main(void)
{
    int n,i;
    int v[100];
    printf ("Introduceti nr de elemente ale vectorului:");
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        printf("v[%d]= ",i);
        scanf("%d",&v[i]);
        }
    printf("Valorile vectorului sunt:\n");
    for(i=(n-1);i>=0;i--){
        printf("v[%d] =%d \n",i,v[i]);
        }
    getch();

}
