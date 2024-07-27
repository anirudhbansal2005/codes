#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 5521;
}
int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        cout<<"Enter array: ";
        cin>>arr[i];
        cout<<endl;
    }
    for(int j=0; j<3; j++){
       cout<<arr[j]<<" ";
    }   
    cout<<endl;
    change(arr);
    for(int j=0; j<3; j++){
       cout<<arr[j]<<" "; // by refrence
    } 
}