#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
    struct Node * prev;
    
};
struct Node *f = NULL;
struct Node *b = NULL;
void queueB(int data){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        printf("Queue Full\n");
    }
    else {
        p->data = data;
        p->next = NULL;
        p->prev = b;
    }
    if(f==NULL){
        f = p;
        b = p;
    }
    else {
        b->next = p; 
        b = p;
    }
}

void queueF(int data){
    struct Node* p = (struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        printf("Queue is full!\n");
    }
    else {
        p->data = data;
        p->next = f;
        p->prev = NULL;
    }
    if (f == NULL) {
        f = b = p;
    } else {
        f->prev = p;  
        f = p;
    }
}
int dequeB(){
    if(b==NULL){
        printf("Queue Empty\n");
    }
    else {
        struct Node * ptr = b;
        int temp = ptr->data;
        b = b->prev;
        if (b != NULL){
            b->next = NULL;
       }
       else {
           f = NULL;
       }
        free(ptr);
        return temp;
    }
}
int dequeF(){
    if(f==NULL){
        printf("Queue Empty\n");
    }
    else {
        struct Node * ptr = f;
        int temp = ptr->data;
        f = f->next;
        free(ptr);
        if (f != NULL){
             f->prev = NULL;
        }
        else {
            b = NULL;
        }
        return temp;
    }
}
void display() {
    struct Node* temp = f;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    queueB(10);
    queueB(20);
    queueF(5);
    queueF(2);
    display();

    printf("Dequeued from front: %d\n", dequeF());
    display();

    printf("Dequeued from back: %d\n", dequeB());
    display();

    return 0;
}
