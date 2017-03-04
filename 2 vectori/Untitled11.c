#include <stdio.h>
#include <conio.h>
void main(void)
{
    int n,i;
    int v[100],v2[100];
    printf("Introduceti nr de elemente ale vectorului:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
        }
    for (i=0;i<(n-1);i++){
        v2[i]=v[i]+v[i+1];
        }
    printf("Elementele primului vector\n");
    for(i=0;i<n;i++){
        printf("v[%d]=%d\n ",i,v[i]);
        }
    printf("Elementele celui de al doilea vector\n");
    for (i=0;i<(n-1);i++){
        printf("v[%d]= %d\n ",i,v2[i]);
        }
    getch();
}
