#include<stdio.h>
#include<stdlib.h>
struct Queue {
    int f;
    int b;
    int size;
    int *arr;
};
int isFull(struct Queue * q){
    if(q->b>=q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue * q){
    if(q->f>=q->b){
        return 1;
    }
    return 0;
}
void enque(struct Queue * q, int data){
    if(isFull(q)){
        printf("Queue Overflow!");
    }
    q->b++;
    q->arr[q->b] = data;
}
int deque(struct Queue * q){
    if(isEmpty(q)){
        printf("Queue Underflow!");
        return -1;
    }
    q->f++;
    int a = q->arr[q->f];
    return a;
}
int main(){
    struct Queue * q = (struct Queue*)malloc(sizeof(struct Queue));
    q->f=-1;
    q->b=-1;
    q->size=6;
    q->arr = (int *)malloc(q->size*sizeof(int));
    enque(q, 15);
    enque(q, 25);
    printf("%d\n", deque(q));
    printf("%d\n", deque(q));
}

