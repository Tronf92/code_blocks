#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[100][100],P[100][100],liniiA,coloaneA,contor1,contor2,liniiP,coloaneP;
    printf("Introduceti nr de linii pt matricea A:");
    scanf("%d",&liniiA);
    printf("Introduceti nr de coloane pt matricea A:");
    scanf("%d",&coloaneA);
    for(contor1=0;contor1<liniiA;contor1++){
        for(contor2=0;contor2<coloaneA;contor2++){
            printf("A[%d][%d]=",contor1,contor2);
            scanf("%d",&A[contor1][contor2]);
            }
        }
    printf("Introduceti nr de linii pt matricea P:");
    scanf("%d",&liniiP);
    printf("Introduceti nr de coloane pt matricea P:");
    scanf("%d",&coloaneP);
    if((liniiP<liniiA)&&(coloaneP<coloaneA)){
        for(contor1=0;contor1<liniiP;contor1++){
            for(contor2=0;contor2<coloaneP;contor2++){
                printf("%d ",A[contor1][contor2]);
            }
            printf("\n");
        }
        printf("\n");
        for(contor1=0;contor1<liniiP;contor1++){
            for(contor2=0;contor2<coloaneP;contor2++){
                printf("%d ",A[contor1+1][contor2+1]);
            }
            printf("\n");
        }
        printf("\n");
        for(contor1=0;contor1<liniiP;contor1++){
            for(contor2=0;contor2<coloaneP;contor2++){
                printf("%d ",A[contor1][contor2+1]);
            }
            printf("\n");
        }
        printf("\n");
        for(contor1=0;contor1<liniiP;contor1++){
            for(contor2=0;contor2<coloaneP;contor2++){
                printf("%d ",A[contor1+1][contor2]);
            }
            printf("\n");

    }





        }
        else {
            printf("nr liniilor si a coloanelor matricei P trebuie sa fie mai mici decat a matricei A!\n");
        }
}
