#include<iostream>
using namespace std;
int main(){
    // // 5 integers -> 5,5,5,2,2021
    // int x[5]; // -> [_,_,_,_,_]
    // x[0] = 5; // -> [5,_,_,_,_]
    // x[1] = 5; // -> [5,5,_,_,_]
    // x[2] = 5; // -> [5,5,5,_,_]
    // x[3] = 2; // -> [5,5,5,2,_]
    // x[4] = 2021; // -> [5,5,5,2,2021]
    // for( int i=0; i<5; i++){
    //     cout<<x[i]<<" ";
    // }

    int arr[6];
    cout<<"Enter arrays elements: "<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    arr[0] = 100; // updating array
    cout<<endl;
    for(int j=0;j<6;j++){
        cout<<arr[j]<<" ";
        cout<<arr[j]*2<<" ";
    }
    	
}
