#include<iostream>
using namespace std;
int main(){
    // // 1 
    // float a = 7/22*(3.14+2)*3/5;
    // cout<<a;
    
    // // 2
    // int b = (4+2)%-8;
    // cout<<endl<<b;

    // // 3
    // float d = 2/7;
    // cout<<endl<<d;
    // float d2 = 2.0/7;
    // cout<<endl<<d2<<endl;

    // // 4
    // int e;
    // cout<<"enter postive integer: ";
    // cin>>e;
    // int div = e%5;
    // if (div!=0) {
    //     cout<<e<<" is not divisble by 5";
    // }
    // else {
    //     cout<<e<<" is divisble by 5"<<endl;
    // }

    // // 5
    // int f;
    // cout<<" enter a number: ";
    // cin>>f;
    // if(f<0){
    //     int f2 = -1*f;
    //     cout<<"absolute value of "<<f<<" is "<<f2<<endl;
    // }
    // else{
    //     cout<<"absolute value of "<<f<<" is "<<f<<endl;
    // }

    // // 6
    // int cp;
    // cout<<"Enter cost prices: "<<endl;
    // cin>>cp;
    // int sp;
    // cout<<"Enter selling price: ";
    // cin>>sp;
    // int profit = sp - cp;
    // if (profit<0){
    //     cout<<"Incurred loss of "<<-profit<<" or ("<<profit<<")";
    // }
    // else {
    //     cout<<"Incurred profit of "<<profit;
    // }

    // // 7
    // int breadth, length;
    // cout<<"Breadth of rectangle: ";
    // cin>>breadth;
    // cout<<"length of rectangle: ";
    // cin>>length;
    // float area = length*breadth;
    // float perimeter = 2*(length+breadth);
    // cout<<"Area is "<<area<<endl<<"perimeter is "<<perimeter<<endl;
    // if (area>perimeter){
    //     cout<<"Area of rectangle is greater than perimeter of rectangle";
    // }
    // else {
    //     cout<<"Area of rectangle is not greater than perimeter of rectangle";
    // }

    // // 8 
    // int digit;
    // cout<<"Enter a digit: ";
    // cin>>digit;
    // // if (digit>=0 && len(digit)==3){
    // if (digit>99 && digit<1000) {
    //     cout<<"The digit provided is positvie and is a three digit number";
    // }
    // else {
    //     cout<<"the digit provided is either not positive or is not a three digits number";
    // }

    // // 9
    // int e;
    // cout<<"enter postive integer: ";
    // cin>>e;
    // int div = e%5;
    // int div2 = e%3;
    // if (div!=0 || div2!=0) {
    //     cout<<e<<" is not divisble by 5 and 3";
    // }
    // else {
    //     cout<<e<<" is divisble by 5 and 3"<<endl;
    // }

    // // 10
    // int e;
    // cout<<"enter postive integer: ";
    // cin>>e;
    // int div = e%5;
    // int div2 = e%3;
    // if (div!=0 && div2!=0) {
    //     cout<<e<<" is not divisble by 5 or 3";
    // }
    // else {
    //     cout<<e<<" is divisble by 5 or 3"<<endl;
    // }

//     // 11
//     int t1,t2,t3;
//     cout<<"Enter 1st digit: ";
//     cin>>t1;
//     cout<<"Enter 2nd digit: ";
//     cin>>t2;
//     cout<<"Enter 3rd digit: ";
//     cin>>t3;
//     // if(t1+t2>t3){
//     //     cout<<"These three sides make a triangle"<<t1+t2<<">"<<t3;
//     // }
//     // else if(t2+t3>t1){
//     //     cout<<"These three sides make a triangle"<<t3+t2<<">"<<t1;
//     // }
//     // else if(t1+t3>t2){
//     //     cout<<"These three sides make a triangle"<<t1+t3<<">"<<t2;
//     // }
//     // else {
//     //     cout<<"No triangle possible";
//     if((t1+t2)>t3 && (t1+t3)>t2 && (t2+t3)>t1){
//          cout<<"These three sides make a triangle";
//      }
//     else {
//         cout<<"No triangle possible";
//     }

    // 12
    // int d1,d2,d3;
    // cout<<"Enter 1st digit: ";
    // cin>>d1;
    // cout<<"Enter 2nd digit: ";
    // cin>>d2;
    // cout<<"Enter 3rd digit: ";
    // cin>>d3;
    // if ( d1 > d2 && d1 > d3){
    //     cout<<d1<<" is greatest among three";
    // }
    // else if ( d2 > d1 && d2 > d3){
    //     cout<<d2<<" is greatest among three";
    // }
    // else if ( d3 > d1 && d3 > d2){
    //     cout<<d3<<" is greatest among three";
    // }

    // 13
    // int d1,d2,d3;
    // cout<<"Enter 1st digit: ";
    // cin>>d1;
    // cout<<"Enter 2nd digit: ";
    // cin>>d2;
    // cout<<"Enter 3rd digit: ";
    // cin>>d3;
    // if ( d1 < d2 && d1 < d3){
    //     cout<<d1<<" is least among three";
    // }
    // else if ( d2 < d1 && d2 < d3){
    //     cout<<d2<<" is least among three";
    // }
    // else if ( d3 < d1 && d3 < d2){
    //     cout<<d3<<" is least among three";
    // }

    // // 14
    // int d10;
    // cout<<"Enter 1st digit: ";
    // cin>>d10;
    // int div4 = d10%3;
    // int div5 = d10%5;
    // int div6 = d10%15;
    // if ( div4==0 || div5==0 && div6!=0){
    //     cout<<d10<<" is divisble by 3 or 5 but not 15";
    // }
    // else if ( div4==0 || div5==0 && div6==0){
    //     cout<<d10<<" is divisble by 3. 5, 15";
    // }
    // else {
    //     cout<<d10<<" is not divisble by 3 or 5 or 15";
    // }

    // // 15
    // int d1,d2,d3;
    // cout<<"Enter 1st digit: ";
    // cin>>d1;
    // cout<<"Enter 2nd digit: ";
    // cin>>d2;
    // cout<<"Enter 3rd digit: ";
    // cin>>d3; 
    // if ( d1>d2 ) {
    //     if (d1>d3){ // d>d2>d3
    //         cout<<d1<<" is greatest";
    //     }
    //     else { // d3>d1>d2
    //         cout<<d3<<" is greatest";
    //     }
    // }
    // else { // d2>d1
    //     if (d2>d3){ // d2>d1>d3
    //         cout<<d2<<" is greatest";
    //     }

    //     else { // d3<d2<d1
    //         cout<<d3<<" is greatest";
    //     }
    
    // }

    // // 16
    // int d1,d2,d3;
    // cout<<"Enter 1st age: ";
    // cin>>d1;
    // cout<<"Enter 2nd age: ";
    // cin>>d2;
    // cout<<"Enter 3rd age: ";
    // cin>>d3; 
    // if ( d1<d2 ) {
    //     if (d1<d3){ // d<d2<d3
    //         cout<<d1<<" is youngest";
    //     }
    //     else { // d3<d1<d2
    //         cout<<d3<<" is youngest";
    //     }
    // }
    // else { // d2<d1
    //     if (d2<d3){ // d2<d<>d3
    //         cout<<d2<<" is youngest";
    //     }

    //     else { // d3<d2<d1
    //         cout<<d3<<" is youngest";
    //     }
    
    // }

    // // 17
    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;
    // if (marks>80 && marks<101) {
    //     cout<<"your grade is very good";
    // }
    // else if (marks>60 && marks<81) {
    //     cout<<"your grade is good";
    // }
    // else if (marks>40 && marks<61) {
    //     cout<<"your grade is average";
    // }
    // else if (marks<=40 && marks>=0) {
    //     cout<<"your failed";
    // }
    // else {
    //     cout<<"undefined";
    // }

    // // 18
    // int x,y;
    // cout<<"Enter x coordinate: ";
    // cin>>x;
    // cout<<"Enter Y coordinate: ";
    // cin>>y;
    // if (x<0 && y<0) {
    //     cout<<"The point "<<x<<" and "<<y<<" lies in 3rd quadrant";
    // }  
    // else if (x<0 && y>0) {
    //     cout<<"The point "<<x<<" and "<<y<<" lies in 4th quadrant";
    // }  
    // else if (x>0 && y<0) {
    //     cout<<"The point "<<x<<" and "<<y<<" lies in 2nd quadrant";
    // }  
    // else if (x>0 && y>0) {
    //     cout<<"The point "<<x<<" and "<<y<<" lies in 1st quadrant";
    // }  
    // else {
    //     cout<<"The point lies on origin";
    // }
    //
}
