#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
};
struct Node * insertAtFirst(struct Node * head, int data){
    struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr; 
}

struct Node * insertAtLast(struct Node * head, int data){
    struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head; 
}

struct Node * insertAtIndex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
    return head;
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * forth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = second;
    second->data = 0;
    second->next = third;
    third->data = 44;
    third->next = forth;
    forth->data = 1;
    forth->next = NULL;
    traversal(head);
    printf("\nInsertion at start\n");
    head = insertAtFirst(head, 30);
    traversal(head);
    printf("\nInsertion at index\n");
    head = insertAtIndex(head, 30, 3);
    traversal(head);
    printf("\nInsertion at last\n");
    head = insertAtLast(head, 30);
    traversal(head);
    
}
