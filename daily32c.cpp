//This problem was asked by Airbnb.

// Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.
#include <bits/stdc++.h> 
#include <time.h>
using namespace std;

int solve(int* arr, int n){
    int i;
    for(i=n-1;i>=2;i--){
        if(i==n-1){
            arr[i-2]+=arr[i];
        }
        else{
            
            arr[i-2]+=arr[i]>arr[i+1]?arr[i]:arr[i+1];
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return arr[0]>arr[1]?arr[0]:arr[1];
}
int main() 
{  
    int n;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<solve(arr, n)<<"\n";
    return 0;
} 
