#include<stdio.h>
void traverseArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indexInsertion(int arr[], int size, int element, int cap, int index){
    if(index>=cap){
        printf("overflow!");
    }
    else {
        for (int i = size-1; i >= index; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index]=element;
    }
}


void indexDeletion(int arr[], int size, int cap, int index){
    if(index>=cap){
        printf("overflow!");
    }
    else {
        for (int i = index-1; i < size; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[size] = 0;
    }
}

int main(){
    int arr[100] = {1, 2, 3, 4};
    int size = 4;
    traverseArray(arr, size);
    indexInsertion(arr, size, 14, 100, 2);
    size++;
    traverseArray(arr, size);
    indexDeletion(arr, size, 100, 1);
    size--;
    traverseArray(arr, size);

}