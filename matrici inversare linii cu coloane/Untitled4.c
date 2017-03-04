#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[100][100],B[100][100],contor1,contor2,linii,coloane;
    printf("Introduceti nr de linii din A:");
    scanf("%d",&linii);
    printf("Introduceti nr de coloane din A:");
    scanf("%d",&coloane);
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("A[%d][%d]=",contor1,contor2);
            scanf("%d",&A[contor1][contor2]);
            }
        }
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            B[contor1][contor2]=A[contor2][contor1];
        }
    }
    printf("Matricea A:\n");
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d ",A[contor1][contor2]);
            }
        printf("\n");
        }
    printf("\nMatricea B:\n");
    for(contor1=0;contor1<coloane;contor1++){
        for(contor2=0;contor2<linii;contor2++){
            printf("%d ",B[contor1][contor2]);
            }
        printf("\n");
        }
    getch();
}
