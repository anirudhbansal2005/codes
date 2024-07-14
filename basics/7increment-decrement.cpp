#include<iostream>
using namespace std;
int main(){
    int x = 3, y = 4;
    x++;
    cout<<x<<endl; // prints x after increasing the value
    cout<<x++<<endl; // prints x then increase value
    cout<<++x<<endl; // prints x after increasing the value
    cout<<--x<<endl; // prints x after decreasing the value
    cout<<x--<<endl; // prints x then decreases the value
}