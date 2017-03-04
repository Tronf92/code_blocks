#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
void main(void)
{
    int a[200],n,i;
    printf("Introduceti nr de elemente:");
    scanf("%d",&n);
    if (n%2==0){
        printf("Introduceti nr impar!\n");
        }
    else{
        for (i=0;i<n;i++){
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
            }
        }
    for (i=0;i<n;i++){
            printf("%d ",a[i]);
    }
    bool oglinda=true;
    int mijloc=(n-1)/2;
    for (i=0;i<mijloc;i++){
        if (a[i]!=a[n-i-1]){
            oglinda=false;
            break;
        }
    }
    if (oglinda) printf("Vectorul este in oglinda!");
    else printf("Vectorul NU este in oglinda!");
    getch();
}
