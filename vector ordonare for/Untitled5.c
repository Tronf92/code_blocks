#include <stdio.h>
#include <conio.h>
void main(void)
{
int i,j,n,a[200],b[200],totaluri[200],start[200];
printf("Introduceti nr de elemente: n=");
scanf("%d",&n);
printf("Introduceti elemente de la 0 la %d chiar si duplicate!\n",n);
for (i=0;i<n;i++){
    printf("a[%d]=",i);
    scanf("%d ",&a[i]);}
for (i=0;i<n;i++){
    totaluri[i]=0;
    }
for (i=0;i<n;i++){
    totaluri[a[i]]++;
    }
start[0]=0;
for (i=1;i<n;i++){
    start[i]=totaluri[i-1]+start[i-1];}
for (i=0;i<n;i++){
    for (j=0;j<totaluri[i];j++){
        b[start[i]+j]=i;
        }
    }
for (i=0;i<n;i++){
    a[i]=b[i];}
printf("Vectorul ordonat: \n");
for (i=0;i<n;i++){
    printf("%d",a[i]);
    }
getch();

}
