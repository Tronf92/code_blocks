#include <stdio.h>
#include <stdlib.h>

void print_again(int n){
    if(n<10){
        printf("%d",n);
    }
    else{
        print_again((n/10));
        printf("%d",(n%10));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    print_again(n);
    return 0;

}
