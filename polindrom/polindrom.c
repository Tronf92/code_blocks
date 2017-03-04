#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,p=0;
    scanf("%d",&a);
    b=a;

    while(b!=0){
        c=b%10;
        b=b/10;
        p=p*10+c;
    }
    if(p==a){
        printf("%d",p);
    }
    return 0;
}
