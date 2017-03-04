#include <stdio.h>
#include <conio.h>

void main(void)
{
    int a[200],i,n,j,temp;
    printf("introduceti nr de elemente:n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d=",&a[i]);}
    printf("\nElementele vectorului initial:");
    for(i=0;i<n;i++){
        printf("%d",&a[i]);
    }
    int pasCurent=0;
    i=0;
    while (pasCurent<n){
        if (a[i]==0){
            for (j=i;j<(n-1);j++){
                a[j]=a[j+1];
            }
            a[n-1]=0;
        }
        else {
            i++;
        }
        pasCurent++;
    }
    printf("\nElementele vectorului final:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    getch();

}
