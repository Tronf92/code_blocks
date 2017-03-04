#include <iostream>
#include "Stiva.h"
#include "Stiva.cpp"


using namespace std;

int main()
{
    Stiva s;
    Stiva s1(100);

    s.push(10);
    s.push(25);
    s.push(55);
    printf("Acuma urmeaza'if'\n");

    if(1>0){
        Stiva s2(30);
        s.push(2);
        int x=s.pop();
    }

    printf("Acuma s-a terminat 'if'\n");

    printf("Varful stivei 's':%d\n",s.top());
    printf("Varful stivei 's':%d\n",s.pop());
    printf("Varful stivei 's':%d\n",s.top());
    getch();
    return 0;
}
