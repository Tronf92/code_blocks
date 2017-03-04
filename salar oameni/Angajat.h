#include <string.h>
#include <iostream>

using namespace std;

class Angajat
{
    public:
        Angajat();
        Angajat(char numele[],char functia[]);
        ~Angajat(void);

    protected:
        char numele[100];
        char functia[100];
        int ore;
        int costOra;

    public:
        void Afisare(void);
        void SetareDatePontaj(int ore,int costOra);
        long Salar(void);

};
