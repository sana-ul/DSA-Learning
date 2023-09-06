#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void Traversal();

int main() {
    Node *Head = (Node *)malloc(sizeof(Node));
    Node *First = (Node *)malloc(sizeof(Node));
    Node *Second = (Node *)malloc(sizeof(Node));

    Head->data = 34;
    Head->next = First;

    First->data = 44;
    First->next = Second;

    Second->data = 23;
    Second->next = NULL;

    Traversal(Head);
    
    return 0;
}

void Traversal(Node *Head) {
    while (Head != NULL) {
        printf("%d\n", Head->data);
        Head = Head->next;
    }
}