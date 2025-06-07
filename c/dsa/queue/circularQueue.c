#include<stdio.h>
#include<stdlib.h>
struct queue {
    int f;
    int b;
    int size;
    int * arr;
};
void enque(struct queue * q, int data){
    if((q->b+1)%q->size==q->f){
        printf("Queue Is Full\n");
    }
    else {
        q->b = (q->b+1)%q->size;
        q->arr[q->b] = data;
    }
}
int deque(struct queue *q){
    if(q->b==q->f){
        print("Queue Empty!");
    }
    else {
        q->f = (q->f+1)%q->size;
        return q->arr[q->f];
    }
}
int main(){
    struct queue * q = (struct queue*) malloc (sizeof(struct queue));
    q->size = 6;
    q->b = 0;
    q->f = 0;
    q->arr = (int *)malloc((q->size)*(sizeof(int)));

}