#include <stdio.h>
#include <conio.h>
void main(void)
{
    int matrice[100][100],linii,coloane,contor1,contor2;
    printf("Introduceti nr de linii:");
    scanf("%d",&linii);
    printf("Introduceti nr de coloane:");
    scanf("%d",&coloane);
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("matrice[%d][%d]=",contor1,contor2);
            scanf("%d",&matrice[contor1][contor2]);
            }
        }
    printf("Matrice:\n");
    printf("\t \t");
    for(contor2=0;contor2<coloane;contor2++){
        printf("COL %d:\t",contor2);
        }
    printf("\n");
    for (contor1=0;contor1<linii;contor1++){
        printf("Linia %d:\t",contor1);
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d\t",matrice[contor1][contor2]);
            }
            printf("\n");
        }
    getch();
}
