#include <stdio.h>
#include <stdlib.h>

typedef struct mylink{
int data;
struct mylink *next;
}node;
int main ()
{
node *first=(node*)malloc(sizeof(node));
node *second=(node*)malloc(sizeof(node));
node *third=(node*)malloc(sizeof(node));

first->data=10;
second->data=20;
second->data=30;

first->next=second;
second->next=third;
third->next=NULL;


//A


    getch ();
}
