#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter 1st digit :";
    cin>>x;
    cout<<"Enter 2nd digit :";
    cin>>y;
    int remainder =  x%y;
    cout<<"Reminder of "<<x<<" and "<<y<<" is "<<remainder;
    }