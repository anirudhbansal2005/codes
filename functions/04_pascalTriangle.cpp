#include<iostream>
using namespace std;
int factorial(int x){
    int pc = 1;
    for( int i=1; i<=x; i++){
        pc *= i;
    }
    return pc;
}

int pnc(int n, int r, int p){
    return n/(r*p);
}

int main(){
    int col=1, row=3, diff, aa=1, bb=1, cc=1, triangle=1;
    for (int k=1; k<=5; i++){
        aa = factorial(col);
        bb = factorial(row);
        cc = factorial(row-col);
        triangle = pnc( bb,aa, cc);
        cout<<aa<<endl;
        cout<<bb<<endl;
        cout<<cc<<endl;
        cout<<triangle<<endl;
        col++;
        row++;
        for ( int i = 1;  )
    }
}