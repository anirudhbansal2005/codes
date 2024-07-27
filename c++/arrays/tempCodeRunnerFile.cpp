    // 2nd
    int a=3, arr[a];
    int sum=0;
    for(int i=0; i<(sizeof(arr)/4); i++){
        cout<<" Enter array digits: ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<endl;
    for(int j=0; j<(sizeof(arr)/4); j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for(int k=0; k<(sizeof(arr)/4); k++){
        sum += arr[k];
    }
    cout<<"Sum of the array is: "<<sum;
