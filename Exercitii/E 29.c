#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[100][100],V[200],contor1,contor2,linii,coloane;
    long suma=0;
    printf("Introduceti nr de linii pt matricea A:");
    scanf("%d",&linii);
    printf("Introduceti nr de coloane pt matricea A:");
    scanf("%d",&coloane);
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("A[%d][%d]=",contor1,contor2);
            scanf("%d",&A[contor1][contor2]);
            }
        }
    for(contor1=0;contor1<linii;contor1++){
        suma=0;
        for(contor2=0;contor2<coloane;contor2++){
            suma+=A[contor1][contor2];
        }
        V[contor1]=suma;
    }
    printf("Matricea initiala:\n");
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d ",A[contor1][contor2]);
        }
        printf("\n");
    }

    printf("\nVectorul rezultat:");
    for(contor1=0;contor1<linii;contor1++){
        printf("%d ",V[contor1]);
    }
    getch();



}
