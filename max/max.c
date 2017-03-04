#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,contor=1,b,n=10;
    scanf("%d",&a);
    b=a;
    while(contor<n){
        if(a>b){
            b=a;
        }
        contor++;
        scanf("%d",&a);
    }
    printf("%d",b);
    return 0;

}
