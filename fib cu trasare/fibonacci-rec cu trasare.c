#include <stdio.h>
#include <stdlib.h>
long fibonacci(int n) {
    static int apel = 0;
    int i;
    int ret;
    apel++;
    printf("%2d,", apel);
    for(i = 1; i <=n; i++) putchar(' ');
    printf("s-a apelat fibonacci(%d)\n", n);
    if (n<=0) {
        printf("%2d,fibonacci(%d) returneaza valoarea 0\n",apel, n);
        return 0;}
    else if (n==1) {
        printf("%2d, fibonacci(%d) returneaza valoarea 1\n", apel, n);
        return 1;}
    else {
        ret = (fibonacci(n-2)+fibonacci(n-1));
        printf("%2d,", apel);
        for(i = 1; i <=n; i++) putchar(' ');
        printf("fibonacci(%d) returneaza valoarea %d\n",n, ret);
        return ret;
    }
}
int main(){
    int n;
    printf("Introduceti un numar natural:");
    scanf("%d",&n);
    printf ("\n Valoarea functiei fibonacci(%d) este:%ld\n",n,fibonacci(n));
    return 0;
}
