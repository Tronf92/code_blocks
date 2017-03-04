#include <stdio.h>
#include <conio.h>

void AfisareMatrice(int v[100][100],int linii, int coloane){
    int i,j;

    printf("\n");
    for(i=0;i<linii;i++){
        for(j=0;j<coloane;j++){
            printf("%d",v[i][j]);
        }
        printf("\n");
    }
}
void CitireMatrice(int v[100][100],int linii,int coloane){
    int i,j;

    for(i=0;i<linii;i++){
        for(j=0;j<coloane;j++){
            printf("Elementul[%d][%d]=",i,j);
            scanf("%d",&v[i][j]);
        }
    }
}
void AfisareVector(int v[],int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
    printf("\n");
}
void CitesteVector(int v[],int n){
    int i;

    for(i=0;i<n;i++){
        printf("Elementul cu indice %d=",i);
        scanf("%d",&v[i]);
    }
}
void main(void){
    int n_a,m_a,n_b,m_b,n_c,m_c;
    int a[100][100],b[100][100],c[100][100];
    printf("Matricea A:\n");
    printf("Introduceti N=");
    scanf("%d",&n_a);
    printf("Introduceti M=");
    scanf("%d",&m_a);

    CitireMatrice(a,n_a,m_a);

    printf("Matricea B:\n");
    printf("Introduceti N=");
    scanf("%d",&n_b);
    printf("Introduceti M=");
    scanf("%d",&m_b);

    CitireMatrice(b,n_b,m_b);

    printf("Matricea C:\n");
    printf("Introduceti N=");
    scanf("%d",&n_c);
    printf("Introduceti M=");
    scanf("%d",&m_c);

    CitireMatrice(c,n_c,m_c);

    printf("A=");
    AfisareMatrice(a,n_a,m_a);
    printf("B=");
    AfisareMatrice(b,n_b,m_b);
    printf("C=");
    AfisareMatrice(c,n_c,m_c);

    int t1[100],t2[100],t3[100];
    int n1,n2,n3;
    printf("Vectorul 1 are elemente n=");
    scanf("%d",&n1);
    CitesteVector(t1,n1);

    printf("Vectorul 2 are elemente n=");
    scanf("%d",&n2);
    CitesteVector(t2,n2);

    printf("Vectorul 3 are elemente n=");
    scanf("%d",&n3);
    CitesteVector(t3,n3);

    AfisareVector(t1,n1);
    AfisareVector(t2,n2);
    AfisareVector(t3,n3);

    printf("\n\n-----------------\nApasa o tasta...");
    getch();
}
