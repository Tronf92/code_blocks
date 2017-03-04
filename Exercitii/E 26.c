#include <stdio.h>
#include <conio.h>
void main (void)
{
    int A[100][100],linii,contor1,contor2;
    printf("Introduceti nr de linii din matricea A\n(nr de linii va fi egal cu nr de coloane):");
    scanf("%d",&linii);
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<linii;contor2++){
            if (contor2>contor1){
                printf("A[%d][%d]=",contor1,contor2);
                scanf("%d",&A[contor1][contor2]);
            }
            if(contor1==contor2){
                contor1==0;
                contor2==0;
                }
            if (contor2<contor1){
                A[contor1][contor2]=A[contor2][contor1];
            }
        }

    }
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<linii;contor2++){
                printf("%d ",A[contor1][contor2]);
    }
            printf("\n");

    }
    getch();




}
