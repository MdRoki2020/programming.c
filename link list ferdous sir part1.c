#include <stdio.h>
#include <stdlib.h>

typedef struct mylist{
int data;
struct mylist *next;
}node;

int main()
{
    node *first=(node*)malloc(sizeof(node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));
    node *fourth=(node*)malloc(sizeof(node));

    first->data=7;
    second->data=2;
    third->data=-8;
    fourth->data=5;

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;





    getch ();
}
