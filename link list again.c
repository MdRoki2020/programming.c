#include<stdio.h>
#include <stdlib.h>

struct Node{

int data;
struct Node *next;

};

int main ()
{

    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;

    a=(struct node*)malloc(sizeof(struct Node));
    b=(struct node*)malloc(sizeof (struct Node));
    c=(struct node*)malloc(sizeof (struct Node));

    a->data=10;
    b->data=20;
    c->data=30;

    a->next=b;
    b->next=c;
    c->next=NULL;

    while(a!=NULL){

        printf("%d->",a->data);
        a=a->next;
    }




    getch ();
}
