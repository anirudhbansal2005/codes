#include<iostream>
using namespace std;
int main(){
    // // 1st
    // int a=3, arr[a];
    // for(int i=0; i<3; i++){
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // for(int j=0; j<3; j++){
    //     cout<<arr[j]<<" ";
    // }

    // // 2nd
    // int a=3, arr[a];
    // int sum=0;
    // for(int i=0; i<(sizeof(arr)/4); i++){
    //     cout<<" Enter array digits: ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int j=0; j<(sizeof(arr)/4); j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<endl;
    // for(int k=0; k<(sizeof(arr)/4); k++){
    //     sum += arr[k];
    // }
    // cout<<"Sum of the array is: "<<sum;

    // // 3rd
    // int a=3, arr[a];
    // int sum=1;
    // for(int i=0; i<(sizeof(arr)/4); i++){
    //     cout<<" Enter array digits: ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int j=0; j<(sizeof(arr)/4); j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<endl;
    // for(int k=0; k<(sizeof(arr)/4); k++){
    //     sum *= arr[k];
    // }
    // cout<<"product of the array is: "<<sum;

    // // 4th
    // int a=3, arr[a];
    // int sum=1;
    // for(int i=0; i<(sizeof(arr)/4); i++){
    //     cout<<" Enter array digits: ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int j=0; j<(sizeof(arr)/4); j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<endl;
    // int mx = arr[0];
    // int mx = INT_MAX;
    // for(int k=1; k<(sizeof(arr)/4); k++){
        // if(mx<arr[k]){
        //     mx = arr[k];
        // }
       // //  mx = max(mx,arr[k]);
    // }
    // cout<<"maxx in the array is: "<<mx;
 
    // // 5th
    // int a=3, arr[a];
    // int sum=1;
    // for(int i=0; i<(sizeof(arr)/4); i++){
    //     cout<<" Enter array digits: ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int j=0; j<(sizeof(arr)/4); j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<endl;
    // int mn = arr[0];
    // // int mn = INT_MIN;
    // for(int k=1; k<(sizeof(arr)/4); k++){
    //     if(mn>arr[k]){
    //         mn = arr[k];
    //     }
    //      // mn = min(mn,arr[k]);
    // }
    // cout<<"min in the array is: "<<mn;
 
    // // 6th
    // int inp;
    // cout<<" Enter the number you want to sqaure upto: ";
    // cin>>inp;
    // int arr[inp];
    // for(int i=0; i<=inp; i++){
    //     arr[i] = i;
    //     }
    // for(int j=0; j<=inp; j++){
    //     cout<<arr[j]<<" ";
    // }
    // for(int k=0; k<=inp; k++){
    //     arr[k] = k*k; // sqauring
    // }
    // cout<<endl;
    // for(int j=0; j<=inp; j++){
    //     cout<<arr[j]<<" ";
    // }

    // // 7th
    // int l;
    // cout<<"Enter length of array: ";
    // cin>>l;
    // int arr[l];
    // cout<<" Enter the digits of array: ";
    // for(int i; i<l; i++){
    //     cin>>arr[i];
    // }
    // for(int j=0; j<l; j++){
    //     cout<<arr[j]<<" ";
    // }
    // for(int j=1; j<l; j+=2){
    //     arr[j] = arr[j]*2;
    // }
    // for( int k=0; k<l; k+=2){
    //     arr[k] = arr[k]+10;
    // }
    // cout<<endl;
    // for(int j=0; j<l; j++){
    //    cout<<arr[j]<<" ";
    // } 

    // // 8th
    // int l,x=6;
    // cout<<"Enter length of array: ";
    // cin>>l;
    // int arr[l];
    // cout<<" Enter the digits of array: ";
    // for(int i; i<l; i++){
    //     cin>>arr[i];
    // }
    // for(int j=0; j<l; j++){
    //    cout<<arr[j]<<" ";
    // } 
    // int greater=0;
    // for(int j=0; j<l; j++){
    //     if(x<arr[j]){
    //         greater++;
    //     }
    // }
    // cout<<endl<<"Number of digits greater than "<<x<<" are: "<<greater;  


    // // 9th
    // int l,x=6;
    // cout<<"Enter length of array: ";
    // cin>>l;
    // int arr[l];
    // cout<<" Enter the digits of array: ";
    // for(int i; i<l; i++){
    //     cin>>arr[i];
    // }
    // for(int j=0; j<l; j++){
    //    cout<<arr[j]<<" ";
    // }
    // int sumeven=0, sumodd=0, diff; 
    // for(int i=0; i<l; i+=2){
    //     sumeven+= arr[i];
    // }
    // for(int i=1; i<l; i+=2){
    //     sumodd+= arr[i];
    // }
    // diff = sumeven-sumodd;
    // cout<<endl<<"sum at even is: "<<sumeven<<endl<<"sum at odd is: "<<sumodd<<endl<<"Diff is: "<<diff;

    // // 10th
    // int l,mx=INT_MIN;
    // cout<<"Enter length of array: ";
    // cin>>l;
    // int arr[l];
    // int smx=INT_MIN;
    // cout<<" Enter the digits of array: ";
    // for(int i; i<l; i++){
    //     cin>>arr[i];
    // }
    // for(int j=0; j<l; j++){
    //    cout<<arr[j]<<" ";
    // }
    // for(int k=0; k<l; k++){
    //     mx = max(mx, arr[k]);
    // }
    // for(int k=0; k<l; k++){
    //     if(arr[k]!=mx){
    //         smx = max(smx,arr[k]);
    //     }
    // }
    // cout<<endl<<"First max is: "<<mx<<endl<<"Second max is: "<<smx;

    // // 11th
    // int l;
    // cout<<"Enter the length of the array: ";
    // cin>>l;
    // int arr[l];
    // for(int i=0; i<l; i++){
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // for(int i=0; i<l; i++){
    //     cout<<arr[i]<<" ";
    // }
    // int lenn = (sizeof(arr)/4);
    // int arr2[lenn];
    // int cop;
    // for(int k=0; k<lenn; k++){
    //     cop = lenn-1-k;
    //     arr2[k] = arr[cop]; // reversing
    // }
    // cout<<endl;
    // for(int k=0; k<lenn; k++){
    //     cout<<arr2[k]<<" ";
    // } 

    // 12th
    int l;
    cout<<"Enter the length of the array: ";
    cin>>l;
    int arr[l];
    for(int i=0; i<l; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<l; i++){
        cout<<arr[i]<<" ";
    }
    int lenn = (sizeof(arr)/4);
    int cop=0;
    int rev = lenn-1;
    int temp;
    for(int k=0; k<lenn; k++){
        temp = arr[cop];
        arr[cop] = arr[rev]; // reversing
        arr[rev] = temp;
        rev--;
        cop++;
        cout<<rev<<" ";
    }
    cout<<endl;
    for(int k=lenn-1; k>=0; k--){
        cout<<arr[k]<<" ";
    } 



}