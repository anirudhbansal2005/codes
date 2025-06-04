#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
void traversal(struct Node* ptr){
    while(ptr!=NULL){
       
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node * deletionAtFirst(struct Node* head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node * deletionAtIndex(struct Node * head, int index){
    struct Node * p = head;
    
    int i = 0;
    
    while(i!=index-1){
        p = p->next;
        i++;
    }
    struct Node * p2 = p->next;
    p->next = p2->next;
    free(p2);
    return head; 
}

struct Node* deletionAtLast(struct Node *head){
    struct Node * p = head;
    struct Node * q = head->next;
    int i = 0;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
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
    // head = deletionAtFirst(head);
    // traversal(head);
    head = deletionAtLast(head);
    traversal(head);
}