#include <iostream>

using namespace std;

int main()
{
    int A[100],i,n,temp,j;
    cout << "Introdu nr de elem. al vectorului" << endl;
    cin >> n;
    for (i=0;i<n;i++){
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    cout << "Vectorul: " << endl;
    for (i=0;i<n;i++){
        cout << A[i] <<"  " ;
    }
    cout << endl;
    cout << "Vectorul ordonat: "<<endl;

    for (i=0;i<n;i++){
        temp=A[i];
        j=i-1;
        while ((A[j]>temp)&&(j>=0)){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }

    for(i=0;i<n;i++){
        cout << A[i] << " " ;
    }




    return 0;
}
