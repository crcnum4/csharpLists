#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void push(int, Node*);
int pop(Node*);
// int peek(Node*);

int main(void)
{
    printf("Hello\n");
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));

}

void push(int data, Node* head)
{

}

int pop(Node* head)
{
    return 0;
}
