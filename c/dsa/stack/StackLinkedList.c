#include<stdio.h>
#include<stdlib.h>

struct StackLinkedList {
    int data;
    struct StackLinkedList * next;
};
struct StackLinkedList * top = NULL;
int isEmpty(struct StackLinkedList * ptr){
    if(ptr==NULL){
        return 1;
    }
    return 0;
}


int isFull(struct StackLinkedList * ptr){
    struct StackLinkedList * p = (struct StackLinkedList*)malloc(sizeof(struct StackLinkedList));
    if(p==NULL){
        return 1;
    }
    return 0;
}
struct StackLinkedList * stackPush(struct StackLinkedList * ptr, int val){
    if(isFull(ptr)){
        printf("Stack overflow!");
        return -1;
    }
    else {
        struct StackLinkedList * p = (struct StackLinkedList*)malloc(sizeof(struct StackLinkedList));
        p->data = val;
        p->next = ptr;
        ptr = p;
        return ptr;
    }
}
struct StackLinkedList * stackPop(struct StackLinkedList * ptr, int val){
    if(isEmpty(ptr)){
        printf("Stack underflow!");
        return -1;
    }
    else {
        struct StackLinkedList * p = ptr;
        int temp = ptr->data;
        ptr = ptr->next;
        free(p);
        return temp;
    }
}
int stackPeek(int index){
    struct StackLinkedList* ptr = top;
    for(int i=0; i<index-1; i++){
        ptr = ptr->next;
    }
    return ptr->data;
}
int stackTop(){
    struct StackLinkedList * ptr = top;
    return ptr->data;
}
int stackBottom(){
    struct StackLinkedList * ptr = top;
    if(isEmpty(ptr)){
        return -1;
    } 
    while(ptr!=NULL){
        ptr = ptr->next;
    }
    return ptr->data;
}
int main(){
    struct StackLinkedList * head = (struct StackLinkedList*)malloc(sizeof(struct StackLinkedList));
    top = stackPush(top, 66);
}