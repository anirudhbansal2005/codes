#include<iostream>
using namespace std;
int main(){
    // 2nd method
    int arr[] = { 3, 4, 6, 2, 7};
    arr[0] = 0;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // reverse indexing
    for(int j=5; j>0; j--){
        cout<<arr[j]<<" ";
    }
}