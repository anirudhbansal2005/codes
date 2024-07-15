#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 5;
    int* p;
    p = &x;
    int* q = p;
    cout<<&x<<endl<<&y<<endl;
    cout<<p<<endl<<*p<<endl;
    cout<<q;
}