#include<iostream>
using namespace std;
int fac(int x){
    int f=1;
    for ( int i=1; i<=x; i++){
        f *= i; 
    }  
    return f;
}
int factorial(int n, int r, int p){
   return n/(r*p);
}
int main(){
    int a,b,c;
    cout<<"enter n: ";
    cin>>a;
    // int n=1;
    // for ( int i=1; i<=a; i++){
    //     n *= i; 
    // }
    cout<<"enter r: ";
    cin>>b;
    // int r=1;
    // for ( int i=1; i<=b; i++){
    //     r *= i; 
    // }
    int d = a-b;
    int p = fac(d);
    int n = fac(a);
    int r = fac(b);
    // int p=1;
    // for ( int i= 1; i<=d; i++){
    //     p *= i;
    // }
    cout<<"factorial of "<<d<<" is "<<p<<endl;
    cout<<"factorial of "<<a<<" is "<<n<<endl;
    cout<<"factorial of "<<b<<" is "<<r<<endl;
    cout<<"pnc "<<factorial(n, r, p)<<endl;
}