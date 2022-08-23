#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    int value;

    struct node *next;
};
struct node *head = NULL;

void insert(int key, int value){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> key = key;
    newNode -> value = value;

    newNode -> next = head;
    head = newNode;
}

void printList(){
    struct node *temp = head;

    while (temp != NULL){
        printf("%d %d \n", temp -> key, temp -> value);
        temp = temp -> next;
    }
}

int main(){
    insert(1, 10);
    insert (2, 20);
    insert(3, 30);

    printList();
}