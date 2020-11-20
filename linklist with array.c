#include<stdio.h>
#include<stdlib.h>

struct Node myLinkList(int arr[], int size);

struct Node{
int data;
struct Node *next;
};

int main(){

int a[]={10,20,30};
myLinkList(a,3);
return 0;
}

struct node *myLinkList(int arr[], int size){
    struct Node *head=NULL,*temp=NULL,*current=NULL;
int i;
for(i=0;i<size;i++){
    temp=(struct Node*)malloc(sizeof (struct Node));
    temp->data=arr[i];
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        current=temp;
    }
    else{
        current->next=temp;
        current=current->next;
    }
}
return 0;
}
