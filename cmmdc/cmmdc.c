#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    while((a>0) && (b>0)){
        if(a>b){
            c=a-b;
            a=b;
            b=c;
        }
        else{
            c=b-a;
            b=a;
            a=c;
        }
    }
    if(a==0){
        printf("b %d",b);
    }
    if(b==0){
        printf("a %d",a);
    }
    return 0;
}
