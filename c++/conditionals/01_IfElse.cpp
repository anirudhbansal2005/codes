#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter positive integer: ";
    cin>>x;
    int y = x%2;
    if (y==0){
      cout<<x<<" is an even number"<<endl;
    }
    else{
      cout<<x<<" is an odd number";
    }
}