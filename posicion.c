#include <stdio.h>
#include <stdlib.h>

struct node{
    int n;
    struct node *next;
};
void crear(struct node *p,int m){
    struct node *vec,*cur;
    vec=malloc(sizeof (struct node));
    p->n=1;
    vec=p;
    int i;
    for(i=2;i<=m;i++){
        cur = malloc (sizeof (struct node));
        cur->n=i;
        vec->next=cur;
        vec=cur;
    }
    vec->next=NULL;
    return ;
}
void mostrar(struct node *p,int posicion){
    struct node *q;
    q=p;
    int i;
    for(i=0;i<posicion;i++){
        printf("%d",q->n);
        q=q->next;
    }
    return ;
}
void poner(struct node *p,int posicion){
    struct node *q,*s;
    s=malloc(sizeof(struct node));
    q=p;
    int i;
    for(i=0;i<posicion;i++){
        q=q->next;
    }
    s->n=posicion;
    s=q->next;
}
main(){
    struct node *head,*p,*cur;
    int i,m,l;
    head = malloc (sizeof (struct node));
    p = malloc (sizeof  (struct node ));
    return 0;
}
