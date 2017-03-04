#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[100][100],linii,coloane,contor1,contor2,temp,ultimulEl,Elretinut;
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
    printf("\nMatricea initiala:\n");
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<linii;contor2++){
            printf("%d",A[contor1][contor2]);
            }
            printf("\n");
        }
    ultimulEl=A[linii-1][coloane-1];
    for(contor1=0;contor1<linii;contor1++){
        temp=A[contor1][coloane-1];
        for(contor2=(coloane-1);contor2>=1;contor2--){
            A[contor1][contor2]=A[contor1][contor2-1];
        }
        if (contor1==0){
            A[0][0]=ultimulEl;
        }
        else {
            A[contor1][0]=Elretinut;
        }
        Elretinut=temp;
    }
    printf("\nMatricea rezultata:\n");
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d",A[contor1][contor2]);
        }
        printf("\n");
    }
    getch();
}
