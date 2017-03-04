#include <iostream>

using namespace std;

int main()
{
    int A[100][100],i,j,x,n,e;
    cout << "Introdu nr de coloane a matricii:" << endl;
    cin >> n;
    cout << "Introdu nr de linii a matricii:" << endl;
    cin >> x;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << "A[" << i << "]["<<j << "]=";
            cin >> A[i][j];
        }
        cout << "\n";
    }

    cout << "Introdu elem. cautat:";
    cin >> e;
    i=0;
    j=0;
    while ((i<n)&&(j<n)&& A[i][j]!=e){
        i++;
        j++;
    }

    if((i==n)&&(j==x)){
        cout << "Elem nu exista";
    }

    else {
        cout << "Elem se afla pe coloana " << i << " linia " << j;
    }

    return 0;
}
