#include<stdio.h>
int linearSearch(int arr[], int s, int index){
    for(int i=0; i<s; i++){
        if(arr[i]==index){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int s, int index){
    int left = 0;
    int right = s-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==index){
            return mid;
        }
        if(arr[mid]<index){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("linear search: %d\n binary search: %d", linearSearch(arr, size, 2), binarySearch(arr, size, 4));
}