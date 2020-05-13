//Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.
#include<iostream>
//Given a 32-bit signed integer, reverse digits of an integer.

#include<cmath>
#include<cstdlib>
using namespace std; 

int main() 
{ 
    int n,num=0;

    cin>>n;
    if(n>0){
        while(n>0){
            num=num*10+n%10;
            n/=10;
        }
    }
    else{
        n=abs(n);
        while(n>0){
            num=num*10+n%10;
            n/=10;
        }
        num*=-1;
    }
    n=num;
    cout<<n<<"\n";
    return 0;
} 