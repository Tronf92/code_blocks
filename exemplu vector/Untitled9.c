#include <stdio.h>
#include <conio.h>
void main (void)
{
    int n,i;
    int v[100];

    printf("Introduceti nr de elemente ale vectorului:");
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
        }
    printf("Valorile vectorului sunt:\n");
    for (i=0;i<n;i++){
        printf("%d ",v[i]);
        }
    getch();

}
