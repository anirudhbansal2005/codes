#include<iostream>
using namespace std;
int main(){
    int arr[3][2];
    // _ _ 
    // _ _
    // _ _
    int k=1;
    for(int i=0; i<3; i++){
        for(int j=0; i<2; j++){
            arr[i][j] = k;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; i<2; j++){
            cout<<" "<<arr[i][j];
        }
    }
}