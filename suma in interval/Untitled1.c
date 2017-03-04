#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main (void)
{
    long a,b,n,k,suma;
    int cifra,p;
    char s[30];
    printf("Limita min.:a=");
    scanf("%ld",&a);
    printf("Limita max.:b=");
    scanf("%ld",&b);
    printf("Suma cifrelor sa fie:n=");
    scanf("%ld",&n);
    for (k=a;k<b;k++){
        sprintf(s,"%ld",k);
        suma=0;
        for(p=0;p<strlen(s);p++ ){
            cifra=(int)s[p]-(int)'0';
            suma+=cifra;
            }
        if(suma==n){
            printf("Cifrele numarului %ld dau suma %ld\n",k,n);}

    }
}
