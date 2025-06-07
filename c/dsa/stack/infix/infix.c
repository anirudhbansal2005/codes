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

int stackTop(){
    if(top==NULL){
        return 0;
    }
    else {
        return top->data;
    }
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
int isOperand(char val){
    if(val=='*' ||val == '/' || val=='-' ||val == '+'){
        return 0;
    }
    return 1;
}
int prec(char val){
    if(val=='*' ||val == '/'){
        return 3;
    }
    else if(val=='+' ||val == '-'){
        return 2;
    }
    return 1;
}
char * infixToPostfix(){
    char arr[1000];

    scanf("%s", arr);
    int i = 0;
    int j = 0;
    char * postfix = (char *)malloc((strlen(arr)+1)*sizeof(char)); 
    while(arr[i]!='\0'){
        if(isOperand(arr[i])){
            postfix[j]=arr[i];
            i++;
            j++;
        }
        else {
            int te = stackTop();
            if(prec(arr[i]) > prec(te)){
                top = push(arr[i]);
                i++;    
            }
            else {
                postfix[j] = pop();
                j++;
            }
        }
    }
    while(!isEmpty()){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main(){
    char * t = infixToPostfix();
    printf("%s", t);
}