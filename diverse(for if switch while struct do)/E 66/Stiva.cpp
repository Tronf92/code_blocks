#include "stiva.h"

Stiva::Stica(){
    items=new int[DIMENSIUNE];
    sp=-1;
    printf(">>>>>S-a apelat constructorul fara parametrii\n");
}

Stiva::Stiva(int dim){
    items=new int[dim];
    sp=-1;
    printf(">>>>S-a apelat constructorul cu un parametru\n");
}

Stiva::~Stiva(){
    delete []items;
    printf(">>>>S-a apelat destructorul\n");
}

int Stiva::top(){
    printf("S-a apelat functia 'top'\n");
    return items[sp];
}

void Stiva::push(int i){
    printf(">>>>S-a apelat functia 'push'\n");
    items[++sp]=i;
}

int Stiva::pop(){
    printf(">>>>>S-a apelat functia 'pop'\n");
    return items[sp--];
}
