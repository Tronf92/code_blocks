#include <iostream>

using namespace std;


int main()
{
    int n,x,i,A[100],temp,j;
    bool schimbari=false;

    cout << "Introdu nr de elem. al vectorului A:" << endl;
    cin >> n;
    for (i=0;i<n;i++){
        cout << "A" <<"[" << i << "]" <<" = ";
        cin >> A[i];
    }
    cout << "Introdu elem. cautat:";
    cin >> x;
    i=0;
    while ((i<n)&&(A[i]!=x)){
        i++;
    }
    if (i==n){
        cout << "Elem nu exista";
    }
    else {
        cout << "Elem se afla pe pozitia: " << i;
    }

}
