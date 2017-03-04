#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[50][50][50],contor1,contor2,contor3,p,q,r;
    printf("Introduceti p=");
    scanf("%d",&p);
    printf("Introduceti q=");
    scanf("%d",&q);
    printf("Introduceti r=");
    scanf("%d",&r);
    for(contor1=0;contor1<p;contor1++){
        for(contor2=0;contor2<q;contor2++){
            for(contor3=0;contor3<r;contor3++){
                printf("A[%d][%d][%d]=",contor1,contor2,contor3);
                scanf("%d",&A[contor1][contor2][contor3]);
                }
            }
        }
    for(contor1=0;contor1<p;contor1++){
        for(contor2=0;contor2<q;contor2++){
            for(contor3=0;contor3<r;contor3++){
                printf("%d",A[contor1][contor2][contor3]);
                }
                }
                }
}
