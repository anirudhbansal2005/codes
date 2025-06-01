#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void traversal(Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main(){
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* forth = new Node;
    head->data = 5;
    head->next = second;

    second->data = 56;
    second->next = third;


    third->data = 5;
    third->next = forth;

    forth->data = 52;
    forth->next = NULL;
    traversal(head);
}