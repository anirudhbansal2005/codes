#include<iostream>
using namespace std;
void swap(int& x, int& y){
    x = x+y;
    y = x-y;
    x = x-y;
}
int main(){
    int a, b;
    cout<<"Enter 1st digit: ";
    cin>>a;
    cout<<"Enter 2nd digit: ";
    cin>>b;
    cout<<"A is: "<<a<<" and B is: "<<b<<endl; // swapping
    swap(a, b);
    cout<<"A and B is: "<<a<<" "<<b<<endl; // swapping
    // // int temp = a;
    // // a = b;
    // // b = temp;
    // a = a+b; // 1 + 2 = 3
    // b = a-b; // 3 - 2 = 1
    // a = a-b; // 3 - 1 = 2
    // cout<<"A is: "<<a<<" and B is: "<<b<<endl; // swapping

}