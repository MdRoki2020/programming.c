#include <stdio.h>
#include <stdlib.h>

struct node{

int data;
struct node *next;

};

int main ()
{

    struct node *a=NULL;
    struct node *b=NULL;
    struct node *c=NULL;

    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));

    printf("Please Enter first value:  ");
    scanf("%d",&a->data);

    printf("Please Enter second value:  ");
    scanf("%d",&b->data);

    printf("Please Enter third value:  ");
    scanf("%d",&c->data);

    /*a->data=5;
    b->data=6;
    c->data=7;*/

    a->next=b;
    b->next=c;
    c->next=NULL;

    while(a!=NULL){
        printf("%d\n",a->data);
        a=a->next;
    }


    return 0;
}
