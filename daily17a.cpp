//Given an array A[] of integers find sum of product of all pairs of array elements.
#include <bits/stdc++.h> 
using namespace std; 


int solve(int* arr, int n){
    int i;
    int ans=0;
    for(i=0;i<n;i++){
        if(i==n-1){
            ans=ans+arr[i]*arr[0];
            break;
        }
        ans=ans+arr[i]*arr[i+1];
    }
    return ans;
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;

    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    cout<<"Enter Elements:\n";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr, n)<<"\n";
	return 0; 
} 

