#include<stdio.h>
#include <stdlib.h>
char d;
static int k;

typedef struct nodetype {
  int key;
  struct nodetype *next;
}NodeT;
NodeT *inceput;

int gasit(int val){
    NodeT *p;
    int ret=0;
    p=inceput;
    while ( p != NULL ) {
       if ( p->key == val ) {ret=1;break;}
        else  p=p->next;
    }
    return ret;
    }
 void tip_lista() {
    NodeT *p;
    p=inceput;
    while ( p != NULL ) {
            printf("%d --> ",p->key);
            p=p->next;
    }
    if (p==NULL) printf("NULL");
}

void stergere(){
    fflush(stdin);
    tip_lista();
    NodeT *p,*p1,*q;
    printf("\nDoriti sa stergeti un nod?D/N\n");
    scanf("%c",&d);
    if(d=='D'){
    printf("Indtroduceti cheia inainte careia doriti sa stergeti elementul!\n");
    scanf("%d",&k);}
    else{
        return 0;
    }
    if(gasit(k)==0)
        printf("Nu am gasit cheia");
    else{
        p = inceput;
        p1=inceput;
        q=p1->next;
        while(p!=NULL){
            if(p->key==k){
                q=p->next;
                if(p!=inceput){
                    p1->next=q->next;
                    }
                else inceput=p1;
                q->key=p;break;
            }
            else{p1=p->next; p= p->next;}
            }
        }
    }
int main()
{
//citire lista pina la ctrl/z
 NodeT *p,*p1,*q;
static char c;
inceput=NULL;

printf("Introduceti intregi ca elemente ale listei terminati cu CTRL/Z\n");
while(scanf("%d",&k)!=EOF) {
    if(gasit(k)==0 ) {
        p = ( NodeT * )malloc( sizeof( NodeT ));
        p->key=k;
        p->next=inceput;
        inceput=p;
    }
}
tip_lista();
while(c!='N'){
printf("\n Doriti inserarea unui nod in lista D/N ");
fflush(stdin);
scanf("%c",&c);
if(toupper(c)=='D'){
    int kn;
    printf("\nIntroduceti cheia inaintea careia doriti sa inserati elementul ");
    scanf("%d",&k);
    printf("\nIntroduceti cheia care doriti sa o inserati ");
    scanf("%d",&kn);
    if (gasit(k) == 0) /* not found  */
            printf("\n Nu am gasit cheia %d",k);
    else {
           p = inceput;
           p1=inceput;
           q= ( NodeT * )malloc( sizeof( NodeT ));
           while ( p != NULL ) {
                if ( p->key == k )   {
                        q->next=p;
                        if (p!=inceput) p1->next=q;
                            else inceput=q;
                        q->key=kn; break;}
                else { p1=p; p = p->next; }
            }

        }
        stergere();


printf("\n LISTA finala  este :\n");
}
tip_lista();


    }





// eliberarea memoriei
   p = inceput;
    while ( p != NULL ) {
        p1=p->next;
        free(p);
        p = p1;
    }
    inceput=NULL;

return 0;
}
