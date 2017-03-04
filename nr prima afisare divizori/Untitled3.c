#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool NumarPrim(int n){
    int i;
    for(i=2;i<n;i++){
        if ((n%i)==0){
            return false;
        }
    }
    return true;
}
void AfisareDivizori(int n){
    int i;
    for(i=2;i<n;i++){
        if ((n%i)==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}

void main (void){
    int i,a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    for(i=a;i<=b;i++){
        if(NumarPrim(i)){
            printf("%d este numar prim!\n",i);
        }
        else {
            printf("%d are divizorii: ",i);
            AfisareDivizori(i);
        }
    }
    printf("\n\n-----------\nApasa o tasta...");
    getch();
}
