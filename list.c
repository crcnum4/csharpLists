#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void push(int, struct Node*);
int pop(struct Node*);
// int peek(struct Node*);

int main(void)
{
    printf("Hello\n");
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;
    head->next->data = 7;
    head->next->next = third;
    head->next->next->data = 9;
    head->next->next->next = NULL;
    // second->data = 7;
    // second->next = third;
    // third->next = NULL;
    // third->data = 9
    push(11, head);
    printf("%i\n", pop(head));
}

void push(int data, struct Node* head)
{
    struct Node* trav = head;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }

    // trav->next = (struct Node*)malloc(sizeof(struct Node))
    // trav->next->data = data
    // trav->next->next = NULL;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    trav->next = newNode;
}

int pop(struct Node* head)
{
    struct Node* trav = head;

    // find the second to last node
    while (trav->next->next != NULL)
    {
        trav = trav->next;
    }

    int data = trav->next->data;
    free(trav->next);
    trav->next = NULL;
    return data;
}
