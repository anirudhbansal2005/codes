#include<iostream>
using namespace std;
void traverse(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void indexInsertion(int arr[], int size, int cap, int element, int index){
    if(index>=cap){
        cout<<"Error!\n";
    }
    else {
        for(int i=size-1; i>=index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
    }
}

void indexDeletion(int arr[], int size, int cap, int index){
    if(index>=cap){
        cout<<"Error!\n";
    }
    else {
        for(int i=index; i<size; i++){
            arr[i] = arr[i+1];
        }
    }
}

int main(){
    int arr[100] = {1, 3, 5, 6, 7};
    int size = 5;
    traverse(arr, size);
    indexInsertion(arr, size, 100, 4, 1);
    size++;
    traverse(arr, size);
    indexDeletion(arr, size, 100, 3);
    size--;
    traverse(arr, size);
}