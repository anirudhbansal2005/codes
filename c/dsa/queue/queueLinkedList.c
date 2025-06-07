#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
struct Node * f = NULL;
struct Node * b = NULL;
void enque(int data){
    struct Node * p = (struct Node *) malloc (sizeof(struct Node));
    if(p==NULL){
        printf("Queue full!\n");
    }
    else {
        p->data = data;
        p->next = NULL;
    }
    if(f==NULL){
      f = p;
      b = p;   
    }
    else {
        b->next = p;
    }
}   
int deque(){
    if(f==NULL){
        printf("Queue Empty!\n");
    }
    struct Node * p = f;
    f = f->next;
    int temp = p->data;
    free(p);
    return temp;
}

void display() {
    struct Node *temp = f;
    while (temp != NULL) {
        printf("%d <- ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    enque(10);
    enque(20);
    enque(30);
    printf("Queue after enqueuing 10, 20, 30:\n");
    display();

    printf("Dequeued: %d\n", deque());
    printf("Queue after deque:\n");
    display();

    return 0;
}