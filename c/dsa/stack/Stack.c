#include<stdio.h>
#include<stdlib.h>
struct Stack {
    int size;
    int top;
    int *arr;
};
int isEmpty(struct Stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct Stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
int stackPush(struct Stack *ptr){
    if(isFull(ptr)){
        printf("Overflow!");
        return -1;
    }
    else {
       printf("Enter number: ");
    ptr->top+=1;
    scanf("%d", ptr->arr[ptr->top]); 
    }
    return -1;
    
}
int stackPop(struct Stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int pp = ptr->arr[ptr->top];
        printf("Enter number: ");
        ptr->top-=1;
        return pp;
    }
    return 0;
}
int stackPeek(struct Stack * ptr, int i){
    if(ptr->top-i+1<0){
        printf("Error!");
    }
    else {
        return ptr->arr[ptr->top-i+1];
    }
}

int stackTop(struct Stack * ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct Stack * ptr){
    if(isEmpty(ptr)){
        return -1;
    } 
    return ptr->arr[0];
}
int main(){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int *)); 
    
}