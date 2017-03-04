#include <iostream>

using namespace std;

struct note{
    char materie[100];
    int nota;
    note *urmator;
};

struct student{
    char nume[100];
    char facultatea[100];
    int varsta;
    note *startNote;
    student *urmator;

};

student *inceput=NULL;

void AdaugLaInceput(){
    student stud;

    cout << "\nNumele:";
    cin >> stud.nume;
    cout << "\nFacultatea:";
    cin >>stud.facultatea;
    cout << "\nVarsta:";
    cin >> stud.varsta;

    student *p=new student;
    p->nume,stud.nume;
    p->facultatea,stud.facultatea;
    p->varsta=stud.varsta;
    p->startNote=NULL;

    p->urmator=inceput;
    inceput=p;

}

void AfisareLista(){
    student *p;

    cout << "\nLista studentilor:\n";
    cout << "Nr.crt\t Student\t\tFacultatea\tVarsta\n";
    p=inceput;
    int i=1;
    while (p!=NULL){
        cout << p->nume,p->facultatea,p->varsta;
        p=p->urmator;
        i++;

    }


}

void AfisareListaFacultate(char facultate[]){
    student *p;

    cout << "\nLista Studentilor de la:" << facultate;
    cout << "Nr.crt\tStudent\t\tFacultatea\tVarsta\n";
    p=inceput;
    int i=1;
    while (p!=NULL){
        if((p->facultatea,facultate)==0){
            cout << p->nume,p->facultatea,p->varsta;
            i++;
        }
        p=p->urmator;
    }


}

void AfisareDateStudent(char nume[]){
    student *p=inceput;

    while ((p!=NULL)&&((p->nume,nume)!=0)){
        p=p->urmator;
    }
    if (p==NULL){
        cout << "\nStudentul " << nume << "nu exista";

    }
    else{
        cout << p->nume << "este la " << p->facultatea << "si are " << p->varsta;
        cout << "NOTE:";
        note *k=p->startNote;
        while (k!=NULL){
            cout << k->materie,k->nota;
            k=k->urmator;
        }
    }
}

void AdaugNotaStuden(char nume[]){
    student *p=inceput;

    while ((p!=NULL)&&((p->nume,nume)!=0)){
        p=p->urmator;
    }
    if(p==NULL){
        cout << "\nStudentul " << nume << "nu exista!";

    }
    else{
        note k;
        cout << "Introdu materia:";
        cin >> k.materie;
        cout << "Introdu nota:";
        cin >> k.nota;

        note* nou=new note;
        nou->materie,k.materie;
        nou->nota=k.nota;
        nou->urmator=p->startNote;
        p->startNote=nou;
    }


}

void AfisareMeniu(){
    cout << "1.Afisare lista studeni." << endl;
    cout << "2.Afisare lista studenti facultate." << endl;
    cout << "3.Adaugare N studenti." << endl;
    cout << "4.Afisare date student." << endl;
    cout << "5.Adaugare nota student." << endl;

    cout << "0.Terminare." << endl;

}


int main(){
    char text[100];
    int x,n,i;

    do{
        AfisareMeniu();
        cout << "Introdu optiunea";
        cin >> x;
        switch (x){
            case 0:
                break;
            case 1:
                AfisareLista();
                break;
            case 2:
                cout << "Introdu facultatea:";
                cin >> text;
                AfisareListaFacultate(text);
                break;
            case 3:
                cout << "Introdu numarul de noduri:";
                cin >> n;
                for (i=0;i<n;i++){
                    AdaugLaInceput();
                }
                break;
            case 4:
                cout << "Introdu numele studentului:";
                cin >> text;
                AfisareDateStudent(text);
                break;
            case 5:
                cout << "Introdu numele studentului:";
                cin >> text;
                AdaugNotaStuden(text);
                break;
            default:
                cout << "Optiune gresita!" << endl;

        }
    }while (x!=0);
    return 0;
}




