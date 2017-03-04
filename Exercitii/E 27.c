#include <stdio.h>
#include <conio.h>
void main(void)
{
    int A[100][100],linii,coloane,contor1,contor2;
    printf("Introduceti nr de linii pt A:");
    scanf("%d",&linii);
    printf("Introduceti nr de coloane pt A:");
    scanf("%d",&coloane);
    int x=1;
    for (contor1=0;contor1<linii;contor1++){
        for (contor2=0;contor2<coloane;contor2++){
               if((contor1%2)==0){
                A[contor1][contor2]=x;}
                else{
                    A[contor1][coloane-contor2-1]=x;

                }
                x++;


            }
        }


    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("%d",A[contor1][contor2]);
        }
        printf("\n");
    }


}
