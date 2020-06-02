//Given two numbers as stings s1 and s2 your task is to multiply them. You are required to complete the function multiplyStrings which takes two strings s1 and s2 as its only argument and returns their product as strings.
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

 string multiplyStrings(string a, string b){
     int a1=stoi(a);
     int b1=stoi(b);
    a1=a1*b1;
    a=to_string(a1);
    return a;
 }

 int main() 
 { 
    string a,b;
    cin>>a;
    cin>>b;
    cout<<multiplyStrings(a,b)<<"\n";
   return 0;
 } 