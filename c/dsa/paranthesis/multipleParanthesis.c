#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
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


struct Node * push(char s){
    struct Node * p = (struct Node*)malloc(sizeof(struct Node));
    p->data = s;
    p->next = top;
    top = p;
    return top; 
}
char pop(){
    if(isEmpty()){
        printf("Stack Underflow!\n");
        return -1;
    }
    struct Node * p = top;
    char temp = p->data;
    top = top->next;
    free(p);
    return temp; 
}

bool match(char x, char y){
    if(x=='(' && y==')'){
        return 1;
    }
    if(x=='[' && y==']'){
        return 1;
    }
    if(x=='{' && y=='}'){
        return 1;
    }
}

int matching(){
    char arr[1000];
    scanf("%s", arr);
    int i = 0;
    char temp; 
    while(arr[i]!='\0'){
        if(arr[i]=='{' || arr[i]=='[' || arr[i]=='('){
           top = push(arr[i]);
        }
        else if(arr[i]==')' || arr[i]==']' || arr[i]=='}') {
            if(isEmpty()){
               return 0;
            }
            temp = pop();
            if(!match(temp, arr[i])){
                return 0;
            }
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