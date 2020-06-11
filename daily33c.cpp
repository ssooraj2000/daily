// This problem was asked by Google.

// Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr,int n,int* finalans){
    int i, j=0;
    for(i=0;i<n-1;i++){
        finalans[j++]=(*max_element(arr+i, arr+i+3));
    }    

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
    int* finalans=(int*)malloc(sizeof(int)*(n-2));
    solve(arr,n, finalans);
    for(i=0;i<n-2;i++){
        cout<<finalans[i]<<" ";
    }
    cout<<"\n";
    return 0;
} 
