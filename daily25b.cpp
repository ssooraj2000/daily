// interchange numbers using pointers
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

 void solve(int* a, int* b){
    int temp;
   temp=*a;
   *a=*b;
   *b=temp;
 }
 int main() 
 { 
    int a, b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
   solve(&a,&b);
   cout<<"a: "<<a<<"\n";
   cout<<"b: "<<b<<"\n";

   return 0;
 } 