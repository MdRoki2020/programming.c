#include <stdio.h>
#include <stdlib.h>

typedef struct mylist{
int data;
struct mylist *next;
}node;


void insert(node*s, int data){
while(s->next!=NULL){
    s=s->next;
}
s->next=(node*)malloc(sizeof(node));
s->next->data=data;
s->next->next=NULL;
}


void display(node*s){
while(s->next!=NULL){
    printf("%s\n",s->next->data);
    s=s->next;
}
}


void search(node*s,int data){
int count = 0;
while(s->next!=NULL){
    if(s->next->data==data){
        count++;
    }
    s=s->next;
}
printf("Total %d results found\n",count);
}



void main()
{
node first=(node)malloc(sizeof(node));
first->next=NULL;

insert(first,Pan Pizza);
insert(first,Pan Pizza);
insert(first,Cheese Pizza);
insert(first,Sicilian Pizza);
insert(first,Sicilian Pizza);

display(first);

search(first,Sicilian Pizza);

display(first);


    getch ();
}

