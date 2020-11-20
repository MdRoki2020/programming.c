#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    first->data=10;
    second->data=20;
    third->data=30;

    first->next=second;
    second->next=third;
    third->next=NULL;

    while(first!=NULL){
        printf("%d\n",first->data);
        first=first->next;
    }

    getch ();
}
