#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[100][100],linii,coloane,contor1,contor2,p,q,temp;
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
    printf("p=");
    scanf("%d",&p);
    printf("q=");
    scanf("%d",&q);
    printf("\nMatricea initiala:\n");
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d",A[contor1][contor2]);
        }
        printf("\n");
    }
    for(contor1=0;contor1<linii;contor1++){
            temp=A[contor1][p];
            A[contor1][p]=A[contor1][q];
            A[contor1][q]=temp;
    }
    printf("\nMatricea rezultata:\n");
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<linii;contor2++){
            printf("%d",A[contor1][contor2]);
        }
        printf("\n");
    }
    getch();
}
