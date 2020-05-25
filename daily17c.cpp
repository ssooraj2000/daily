//You are given an integer N. You need to convert all zeroes of N to 5.
#include <bits/stdc++.h> 
using namespace std; 


int solve(int n){
    int i;
    int temp=n;
    int rem,count=1;
    while(temp>0){
        rem=temp%10;
        if(rem==0){
            n=n+5*count;
        }
        count*=10;
        temp/=10; 
    }
    return n;
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    cout<<"Ans:"<<solve(n)<<"\n";
	return 0; 
} 

