#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
      Node *first, *second, *third, *temp;

     first = (Node *)malloc(sizeof(Node));
    first->data = 10;

    second = (Node *)malloc(sizeof(Node));
    second->data = 20;

    third = (Node *)malloc(sizeof(Node));
    third->data = 30;

     first->next = second; 
    second->next = third;  
  third->next = NULL;  
    printf("Linked list:");
    temp = first;

    while (temp) {
        printf(" %d", temp->data);
        temp = temp->next;
    }

    getch();   
    clrscr();  
    return 0;
}