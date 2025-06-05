#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node {
    char data;
    struct Node * next;
};
struct Node * top =  NULL;
int isEmpty(){
    if(top==NULL){
        return 1;
    }
    return 0;
}

// int isFull(struct StackLinkedList * ptr){
//     struct StackLinkedList * p = (struct StackLinkedList*)malloc(sizeof(struct StackLinkedList));
//     if(p==NULL){
//         return 1;
//     }
//     return 0;
// }
struct Node * push(char s){
    struct Node * p = (struct Node*)malloc(sizeof(struct Node));
    p->data = s;
    p->next = top;
    top = p;
    return top; 
}
int pop(){
    if(isEmpty()){
        printf("Stack Underflow!\n");
        return -1;
    }
    struct Node * p = top;
    top = top->next;
    free(p);
    return 1; 
}

int matching(){
    char arr[1000];
    scanf("%s", arr);
    int i = 0; 
    while(arr[i]!='\0'){
        if(arr[i]=='('){
           top = push('(');
        }
        else if(arr[i]==')') {
            if(isEmpty()){
               return 0;
            }
           pop();
        }
        i++;
    }
    if(isEmpty()){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    if(matching()){
        printf("Balanced!\n");
    }
    else {
        printf("Unbalanced\n");
    }

}