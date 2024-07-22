
}

int pnc(int n, int r){
    int aa = factorial(n);
    int bb = factorial(r);
    int cc = factorial(n-r);
    return aa/(bb*cc);
}

int main(){
    int n, triangle=1;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=0; i<=n; i++){
        for( int j = 0; j<=n-i; j++){
            cout<<" ";
        }
        for (int j=0; j<=i; j++){
            triangle = pnc( i, j);
            cout<<triangle<<" ";
        }

        cout<<endl;
        // cout<<bb<<endl;
        // cout<<cc<<endl;

    }
}