#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node **head_ref, int ndata)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = ndata;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void printMiddle(struct Node *head) //x//
{
    struct Node *slow_ptr = head; //getMiddle//
    struct Node *fast_ptr = head; //getMiddle//

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d] Cheese Pizza\n\n", slow_ptr->data);

    }
}

int main()
{

    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    printMiddle(head);

    return 0;
}
