#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
};

void traversal(struct Node * head){
    struct Node * ptr = head;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while(ptr!=head);
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * forth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 88;
    second->next = third;
    third->data = 1;
    third->next = forth;
    forth->data = 9;
    forth->next = head;
    traversal(head);

}