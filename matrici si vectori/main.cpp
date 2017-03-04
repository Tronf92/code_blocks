#include <iostream>

using namespace std;

void CreareVector()
{
    int A[1000],n;
    cout << "Introdu nr de elem. ale vectorului:";
    cin >> n;
    for (int i=0;i<n;i++){
        cout << "A[" << i << "] =";
        cin >> A[i];
    }


}

void AfisareVector()
{
    int A[1000],n;
    cout << "Vectorul:" ;
    for (int i=0;i<n;i++){
        cout << A[i]<<" ";
    }
    cout << endl;
}

void CreareMatrice()
{
    int B[100][100],n,m,i,j;
    cout << "Introdu nr de linii din matrice:";
    cin >> n;
    cout << "Introdu nr de coloane din matrice:";
    cin >> m;

    for( i=0;i<n;i++){
        for( j=0;j<m;j++){
            cout << "B[" << i << "][" << j << "] =";
            cin >> B[i][j];
        }
    }

}

void AfisareMatrice()
{
    int B[100][100],n,m,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout << B[i][j]<< " ";
        }
    }
}
void Meniu()
{
    cout << "1.Creare vector." << endl;
    cout << "2.Afisare vector." << endl;
    cout << "3.Creare matrice." << endl;
    cout << "4.Afisare matrice." << endl;
    cout << "0.Terminare." << endl;
}


int main()
{
    int a;
    do{
        Meniu();
        cin >> a;
        switch(a){
            case 0:
                break;
            case 1:
                CreareVector();
                break;
            case 2:
                AfisareVector();
                break;
            case 3:
                CreareMatrice();
                break;
            case 4:
                AfisareMatrice();
            default:
                cout << "Optiunea nu exista!" << endl;
                break;
            }
    }while(a!=0);
    return 0;
}
