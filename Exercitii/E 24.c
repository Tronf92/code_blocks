#include <stdio.h>
#include <conio.h>
void main (void)
{
    int A[100][100],B[100][100],S[100][100],linii,coloane,contor1,contor2;
    printf("Introduceti nr de linii pt matricea A:");
    scanf("%d",&linii);
    printf("Introduceti nr de coloane pt matricea A:");
    scanf("%d",&coloane);
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("A[%d][%d]=",contor1,contor2);
            scanf("%d",&A[contor1][contor2]);
            }
        }

    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("B[%d][%d]=",contor1,contor2);
            scanf("%d",&B[contor1][contor2]);
        }
    }
    for (contor1=0;contor1<linii;contor1++){
        for (contor2=0;contor2<coloane;contor2++){
            S[contor1][contor2]=A[contor1][contor2]+B[contor1][contor2];
        }
    }
    printf("\nA+B=C:\n\n");
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d ",A[contor1][contor2]);
        }
        if (contor1==(linii/2)){
            printf("+");
        }
        printf("\t");
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d ",B[contor1][contor2]);
        }
        if (contor1==(linii/2)){
            printf("=");
        }
        printf("\t");
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d ",S[contor1][contor2]);
        }
        printf("\n");
    }


    getch();
}
