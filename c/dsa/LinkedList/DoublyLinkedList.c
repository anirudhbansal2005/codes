#include<stdio.h>
#include<stdlib.h>
struct Node {
    struct Node * prev;
    int data;
    struct Node * next;
};

void traversalReverse(struct Node * ptr){
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    
    // Traverse backward
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}
void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * forth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * five = (struct Node *)malloc(sizeof(struct Node));
    head->prev = NULL;
    head->data = 8;
    head->next = second;
    second->prev = head;
    second->data = 4;
    second->next = third;
    third->prev = second;
    third->data = 0;
    third->next = forth;
    forth->prev = third;
    forth->data = 9;
    forth->next = five;
    five->prev = forth;
    five->data = 8888;
    five->next = NULL;
    traversal(head);
    traversalReverse(head);
}