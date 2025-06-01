#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int value){
    int left = 0;
    int right = size - 1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == value){
            return mid;
        }
        if(arr[mid]<value){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[100] = {1, 3, 5, 6, 7, 23, 2, 4, 6, 4, 7, 5, 53, 65, 6, 54, 6, 54, 64};
    cout<<binarySearch(arr, 19, 3);
}